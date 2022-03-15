#include "main.h"

/**
 * main - This program prints the phrase Hello, World
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "main";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
