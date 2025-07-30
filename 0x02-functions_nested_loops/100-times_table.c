#include "main.h"

/**
 * times_table - prints all times table,
 * followed by a new line
 * @n: print from this number
 */

void print_times_table(int n)
{
    int num, mult, prod;

    for (num = 0; num <= n; num++)
    {
        for (mult = 0; mult <= n; mult++)
        {
            prod = num * mult;
            if (prod >= 100)
            {
                _putchar(' ');
                _putchar((prod / 100) + '0');
                _putchar(((prod / 10) % 10) + '0');
                _putchar((prod % 10) + '0');
            }
            else if (prod >= 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar((prod / 10) + '0');
                _putchar((prod % 10) + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
                _putchar(prod + '0');
            }
            if (mult != n)
            {
                _putchar(',');
            }
        }
        _putchar('\n');
    }
}
