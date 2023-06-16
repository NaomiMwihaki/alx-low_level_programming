#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ltr;

	for (ltr = 'a' ; ltr <= 'z'; ltr++)
		putchar(ltr);
	for (ltr = 'A' ; ltr <= 'Z' ; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
