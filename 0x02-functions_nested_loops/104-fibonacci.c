#include "main.h"
#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci num
 *
 * return: always 0
 */

int main(void)
{
	int a = 1, b = 2, c;
	int count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
