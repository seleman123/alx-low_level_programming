#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it wored, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
		return (-1);

	p = 1 << index;
	*= (*n | p);

	return (1);
}
