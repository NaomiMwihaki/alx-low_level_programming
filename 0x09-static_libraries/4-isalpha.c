#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c : The character been checked lowercase,uppercase
 * Return: 1 if c is lowercase,uppercase 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	{
	if (c >= 'A' && c <= 'Z')
	return (1);
	}
	return (0);
}
