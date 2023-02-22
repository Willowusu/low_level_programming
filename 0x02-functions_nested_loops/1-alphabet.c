#include "main.h"

/**
 * print_alphabet - main function
 * Description: It prints the alphabet, in lowercase, followed by a new line
 * Return: nothing because data type is void.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
