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

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
			printf("Error\n");
			exit(98);
			}
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
