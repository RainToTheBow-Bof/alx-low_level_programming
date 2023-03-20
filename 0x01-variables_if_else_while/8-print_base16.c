#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Printing all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
