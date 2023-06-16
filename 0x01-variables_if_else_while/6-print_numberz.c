#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
