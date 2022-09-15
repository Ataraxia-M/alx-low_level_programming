#include "main.h"

/**
 * more_numbers - prints 10 times the number,
 * from 0 to 14, followed by a new line.
 * 
 * Returns: 0
 */

void more_numbers(void)
{
    char i, j ;
    int n;

    n = 0;

    while (n < 10)
    {
        for (i = 0; i <= 14; i++)
        {
            j = i;
            if (i >= 10)
            {
                _putchar('1');
                j = i % 10;
            }
            _putchar('0' + j);
        }

        _putchar('\n');
        n++;
        
    }
    

}