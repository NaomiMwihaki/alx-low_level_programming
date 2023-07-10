#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 always success
 */
int main (int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return (0);
}
