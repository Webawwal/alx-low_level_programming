#include "main.h"

 /**
 * main - Entry point
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabets_x10
 * Description: program that prints the alphabets_x10
 * followed by a new line
 *
 * Return: Always return 0 (Success)
 * Return: Exit int function with an int 0
 */
void print_alphabet_x10(void)
{
	int aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	_putchar('\n');

}
