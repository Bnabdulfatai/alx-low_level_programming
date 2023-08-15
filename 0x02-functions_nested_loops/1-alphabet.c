#include "main.h"
/**
 * main - Entry point
 * Prints the lowercase alphabets followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n')
}
