#include "main.h"

/**
 * _puts - Write a function that prints a string
 * @str: Prints a string
 *
 * Return: (void)
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
