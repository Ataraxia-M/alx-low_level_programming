#include <stdio.h>
/**
 * main - main block
 * Description:  Prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	alphabets = 'A';

	while (alphabets <= 'Z')
	{
		putchar(alphabets);
		alphabets++;
	}

	putchar('\n');
	return (0);
}
