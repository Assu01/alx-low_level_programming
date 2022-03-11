#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 49;

	while (i < 58)
	{
		while (j < 58)
		{

			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = 48;
				k++;
			}
			j++;
			l = j + 1;
			k = i;
		}
		j = 48;
		i++;
		k = i;
		l = j + 1;
	}
	putchar('\n');
	return (0);
}
