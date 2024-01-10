#include "shell.h"


/**
 * _itoa - integer to ascci
 * @n: initialize
 *
 * Return: copy of malloc
*/

char *_itoa(int n)
{
	char bf[20];
	int i = 0;

	if (n == 0)
		bf[i++] = '0';
	else
	{
		while (n > 0)
		{
			bf[i++] = (n % 10) + '0';
			n /= 10;
		}
	}
	bf[i] = '\0';
	rev_str(bf, i);
	return (_strdup(bf));
}

