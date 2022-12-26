#include <stdio.h>
/**
 * main - thks programe will print alphabets
 * Return: 0 if successful
*/

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');
	return (0);
}
