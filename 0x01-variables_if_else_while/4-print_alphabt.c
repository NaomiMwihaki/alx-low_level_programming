#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		if (low != 'e' && low != 'q')
			putchar(low);
	putchar('\n');
	return (0);
}
