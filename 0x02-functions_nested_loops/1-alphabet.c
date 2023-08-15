#include "main.h"
/**
 * main - Entry point
 * Description: Prints the english Alphabets
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
