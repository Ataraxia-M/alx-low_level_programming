#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print the alphabets in lowercase
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

	putchar('\n');
	return (0);
}
