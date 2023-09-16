#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two
 *              two-digit numbers in ascending order,
 *              separated by a comma and space, using
 *              only putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (p == 98 && q == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}

