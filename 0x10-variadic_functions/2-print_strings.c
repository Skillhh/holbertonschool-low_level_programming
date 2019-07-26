#include "variadic_functions.h"

/**
 * print_strings - entry point
 * @separator: entry string
 * @n: number arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *p_args;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		p_args = va_arg(args, char *);
		if (p_args != NULL)
		{
			printf("%s", p_args);
			if (separator != NULL)
			{
				if (count < n - 1)
					printf("%s", separator);
			}
			else
			{
				if (count < n - 1)
					putchar(' ');
			}
		}
		else
		{
			printf("%p", p_args);
			if (separator != NULL)
			{
				if (count < n - 1)
					printf("%s", separator);
			}
			else
			{
				if (count < n - 1)
					putchar(' ');
			}
		}
	}
	va_end(args);
}
