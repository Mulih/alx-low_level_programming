#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = (char)va_arg(args, int);
						write(1, &c, 1);
						count++;
					}
					break;
				case 's':
					{
						char *s = va_arg(args, char*);
						int len = 0;
						while (s[len] != '\0')
							len++;
						write(1, s, len);
						count += len;
					}
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return count;
}
