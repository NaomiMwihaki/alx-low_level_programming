#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The product of num1 and num2 as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry, product;
	char *result;

	if (*num1 == '0' || *num2 == '0')
		return (0);
	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = calloc(len1 + len2 + 1, sizeof(char));
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}
	for (k = 0; k < len1 + len2; k++)
		result[k] += '0';
	if (result[0] == '0')
	{
		for (k = 0; k < len1 + len2; k++)
			result[k] = result[k + 1];
	}
	return (result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	while (*num1)
	{
		if (!_isdigit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}
	while (*num2)
	{
		if (!_isdigit(*num2))
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}
	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);
	return (0);
}

