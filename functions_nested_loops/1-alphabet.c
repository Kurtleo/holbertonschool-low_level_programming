#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar (A);
	}
	_putchar ('\n');
}
