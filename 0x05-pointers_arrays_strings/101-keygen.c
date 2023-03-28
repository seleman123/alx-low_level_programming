#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate rnandom password
 *Description: generate rnandom password
 * Return: A integer
 */

int main(void)
{
int counter = 0;
srandom(time(NULL));
char randChar;

int  passwordLength;

printf("Type in a password Length \n");
scanf("%d", &passwordLength);

while (counter < passwordLength)
{
randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZa
	bcdefghijklmnopqrstuvwxyz0123456789"[random() % 62];
printf("%c", randChar);
counter++;
}
printf("\n");
return (0);
}
