#include <unistd.h>

/**
  * _putchar - Entry point 
  * Return: Always 1 (success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
