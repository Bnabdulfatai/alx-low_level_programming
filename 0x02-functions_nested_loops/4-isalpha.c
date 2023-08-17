#include "main.h"
/**
 * _isalpha - funtion that check for alphabetical character
 *@c: The character to be checked
 *Return: 1 (if c is a letter, lowercase or uppercase) and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
