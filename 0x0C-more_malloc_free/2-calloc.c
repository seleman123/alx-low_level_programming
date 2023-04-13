#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of members
  * @size: size
  * Description:  allocates memory for an array, using malloc
  * Return: If malloc fails, then _calloc returns NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *k;

if (nmemb == 0 || size == 0)
return (NULL);

l = nmemb * size;
k = malloc(l);

if (k == NULL)
return (NULL);

while (i < l)
{
k[i] = 0;
i++;
}

return (k);
}
