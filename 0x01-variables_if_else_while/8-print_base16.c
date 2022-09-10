#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char num = '0';
	char alphabets = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alphabets <= 'f')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
	return (0);
}
