#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int is_valid_number(char *num)
{
	while (*num != '\0')
	{
		if (!isdigit(*num))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
