#include <stdio.h>

/**
 * main -  programs to print number
 * Return: 0 on success
*/

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar(d % 10 + '0');

	putchar('\n');

	return (0);
}
