#include <stdio.h>

/**
 * main - program to print alphabets in reversr order.
 * return: 0 on success.
*/

int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);

	putchar('\n');

	return (0);
}
