#include <stdio.h>
/**
 * main - this program to print the size of types
 * Return: 0 if the program is succefull
*/
int main(void)
{
	int integer;
	double dou;
	float floating;
	char character;

	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("size of double: %lu byte(s)\n", (unsigned long)sizeof(dou));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(floating));
	printf("size of char: %lu byte(s)", (unsigned long)sizeof(character));

	return (0);
}
