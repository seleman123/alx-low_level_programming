#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


/* betty style doc for function main goes there */
int main(void)
{
	int num;
	int n;

	for (num = 0; num <= 98; num++)
	{

	for (n = num + 1; n <= 99; n++)
	{

	putchar(num / 10 + '0');
	putchar(num % 10 + '0');
	putchar(' ');
	putchar(n / 10 + '0');
	putchar(n % 10 + '0');
	if (num == 98 && n == 99)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
