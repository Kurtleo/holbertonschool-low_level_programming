#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: void
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
