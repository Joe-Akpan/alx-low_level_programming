#include "main.h"

/**
 * print_alphabet_x10 - program to print alphabet in 10 places
 * Return: always 0
*/

void print_alphabet_x10(void)
{
	int check = 0;
	char alphabet;

	for (check = 0; check <= 9; check++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
			_putchar('\n');
		}
	}
}
