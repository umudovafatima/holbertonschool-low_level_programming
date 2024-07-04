#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char fatima = 'z';

	while (fatima >= 'a')
	{
		putchar(fatima);
		fatima--;
	}
	putchar('\n');
	return (0);
}
