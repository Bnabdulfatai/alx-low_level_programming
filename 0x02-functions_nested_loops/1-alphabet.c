#include "main.h"
/**
 * print_alphabet - Prints lowercse alphabets followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
