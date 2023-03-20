#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Printing the alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(letters[i]));
	}
	putchar('\n');
	return (0);
}
