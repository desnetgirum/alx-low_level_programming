#include "main.h"
#include <stdio.>

/**
 * *print_to_98 - prints natural
 * *numbers from n to 98
 * *@n:integer to start by
 * *return: returns nothing
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}
}
