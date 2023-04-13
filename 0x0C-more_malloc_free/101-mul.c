#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit_string - Entry point
 *
 * @str: The string of numbers to be iterate through.
 *
 * Return: 0 on success 1 on faliure
*/

int is_digit_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - initialize array with 0 byte
 *
 * @num1: string 1
 * @num2: string 2
 *
 * Return: nothing
*/

int multiply(int num1, int num2)
{
	if (num2 == 0)
		return (0);

	else if (num2 % 2 == 0)
	{
		return (multiply(num1 * 2, num2 / 2));
	}
	else
	{
		return (multiply(num1 * 2, num2 / 2) + num1);
	}
}


/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
/* Check the number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

/* Check if the arguments are composed of digits */
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

/* Convert the arguments to integers */
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

/* Multiply the numbers */
	int result = multiply(num1, num2);

/* Print the result */
	printf("%d\n", result);

	return (0);
}
