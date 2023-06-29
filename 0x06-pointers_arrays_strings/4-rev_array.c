#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: A pointer to an array
 * @n: The number of elements in a an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;

	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
