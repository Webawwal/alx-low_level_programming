#include "main.h"

/**
 * main - Entry point
 * print_alphabet - Entry point
 *
 * Description: print alphabets
 * Description: program that prints the alphabets
 * followed by a new line
 *
 * Return: Always return 0 (Success)
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
