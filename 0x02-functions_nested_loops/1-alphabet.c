#include "main.h"

/**
 * main - Entry point
 *
 * print_1-alphabet.c - Entry point
 * followed by a new line
 *
 * Return: Exit int function with an int 0
 */
void print_alphabet(void)
{
	int aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	_putchar('\n');

}
