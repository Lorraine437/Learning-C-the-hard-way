#include "main.h"

/**
 * printAlpha-prints alphabet except c and k
 *
 * Return: void 
 */
void printAlpha(void)
{
	int i;
	
	i=97;
	while(i < 123)
	{
		if (i == 'c' || i == 'k')
			continue;
		i++;
		_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
