#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguemnet contemts
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
