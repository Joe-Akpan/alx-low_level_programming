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

	printf("size of int: %lu byte(s)\n", sizeof(integer));
	printf("size of double: %lu byte(s)\n", sizeof(dou));
	printf("size of float: %lu byte(s)\n", sizeof(floating));
	printf("size of char: %lu byte(s)", sizeof(character));

	return (0);
}
