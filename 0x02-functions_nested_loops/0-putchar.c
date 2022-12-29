#include <stdio.h>
#include <unistd.h>

/**
 * main - program to print _putchar.
 * Return: 0 onsuccess.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
