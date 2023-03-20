#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Printing all single digits from 0 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10);
	putchar('\n');
	return (0);
}
