#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - write a functions that takes a pointer to an int as parameter and updates the value it points to 98
 *
 * @n: pointer
 * Return: void
 */

void reset_to_98(int *n);
{
	if (n != NULL)
	{
		*n = 98;
	}
}
