#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alp;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');

	return (0);
}
