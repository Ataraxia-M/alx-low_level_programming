#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
char sep[] = ",\t;\n; .!?\"(){}";
int check, i, j;

for (i = 0; str[i] != '\0'; i++)
{
	check = 0;

	if (i == 0)
	{
		check = 1;
	}
	else
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j])
			{
				check = 1;
				break;
			}
		}
	}

	if (check == 1)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= ('a' - 'A');
		}
	}
}
return (str);
}
