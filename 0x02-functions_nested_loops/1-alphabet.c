/*
 * File: 1-alphabet.c
*/

#include "main.h"

/**
 * main - program to print alphabet
 * Return: 0 always
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
