#include <stdio.h>
/**
 * main - the program prints alphabets in upper and lower character
 * Return: 0 if successfull
*/

int main(void)
{
	char gh;
	
	for (gh = 'a'; gh <= 'z'; gh++)
		putchar(gh);

	for (gh = 'A'; gh <= 'Z'; gh++)
		putchar(gh);

	putchar('\n');
	return (0);
}
