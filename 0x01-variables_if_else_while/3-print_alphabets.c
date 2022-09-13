#include <stdio.h>

/**
 * main -entry point. Print alphabets
 *
 * Description: prints all alphabets in upper and lower case followed by
 * new line
 *
 * Return: 0
 */
int main(void)
{
	int ch;
	int up;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (up = 'A'; up <= 'z'; up++)
		putchar(up);

	putchar('\n');
	return (0);
}
