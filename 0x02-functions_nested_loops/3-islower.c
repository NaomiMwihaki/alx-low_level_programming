#include "main.h"
/**
 *  _islower - check if char is lowercase
 *  Return: 1 if char is lowere case ,otherwise 0;
 *  @c : parammer to be tested
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
