#include "main.h"
#include <stdlib.h>

/**
  * array_range - a function that creates an array of integers
  * @min: int
  * @max: int
  * Description: a function that creates an array of integers
  * Return: integer value
  */
int *array_range(int min, int max)
{
int *k, i = 0;

if (min > max)
return (NULL);

k = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (k == NULL)
return (NULL);

while (min <= max)
{
k[i] = min;
i++;
min++;
}

return (k);
}
