#include <stdio.h>
/**
 * main - program to print some character except some.
 * Return: 0 if success.
*/

int main(void)
{
	char we;

	for (we = 'a'; we <= 'z'; we++)
	{
		if (we != 'e' || we != 'q')
			putchar(we);
	}

	putchar('\n');
	return (0);
}
