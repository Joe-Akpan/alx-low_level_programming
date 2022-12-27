#include <stdio.h>

/**
 * main - progrfam to print base 16 numbers
 * Return: 0 if success
*/

int main(void)
{
	int w;
	char l;

	for (w = 0; w < 10; w++)
		putchar(w % 10 + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
