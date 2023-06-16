#include <stdio.h>
/**
 * main - a program that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int f;
	char low;

	for (f = '0'; f <= '9'; f++)
		putchar(f);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
