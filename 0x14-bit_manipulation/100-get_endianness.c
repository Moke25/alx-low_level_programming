#include "main.h"

/**
 * get_endianness - checks if a machine has a little or large endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
