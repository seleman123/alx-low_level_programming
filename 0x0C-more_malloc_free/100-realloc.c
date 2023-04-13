#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: void
  * @old_size: unsigned int
  * @new_size: unsigned int
  * Description: reallocates memory block using malloc and free
  * Return: If new_size == old_size return ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *c;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
c = malloc(new_size);

if (c == NULL)
return (NULL);

return (c);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}

c = malloc(new_size);

if (c == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
c[i] = ((char *) ptr)[i];
}

free(ptr);
return (c);
}
