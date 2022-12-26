#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program to print when successsful
 * Return: 0 if successful
*/
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int m;
	char text[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	/* your code goes there */

	if (m > 5)
		printf("%s %d is %d and is greater than 5\n", text, n, m);
	else if (m == 0)
		printf("%s %d is %d and is 0\n", text, n, m);
	else if (m < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", text, n, m);
	return (0);
}
