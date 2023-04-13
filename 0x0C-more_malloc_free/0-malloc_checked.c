#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -allocates memory using malloc
 * @b: unsigned int
 * Description: a function that allocates memory using malloc
 * Return: return pointer, or 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
	exit(98);
	}
	return (j);
}
