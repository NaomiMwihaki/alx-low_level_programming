#include <stdio.h>
/**
 * main - A program that prints prints the size of various types on the computer it is compiled and run on.
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a lint: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long lint: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
