#include <stdio.h>
/**
 * main - main block
 * Description: Prints the alphabets in lowercase while omitting letters e and q
 * Return: 0
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
		alphabets++;
	}

	putchar('\n');
	return (0);
}
