#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char salam = 'a';

	while (salam <= 'z')
	{
		_putchar(salam);
		salam++;
	}
	_putchar('\n');
}
