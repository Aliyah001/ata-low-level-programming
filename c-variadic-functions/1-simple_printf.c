#include <stdarg.h>
#include <unistd.h> /* Required for the write system call */

 
void _print_number(long n)
{
	char digit;

	if (n < 0)
	{
		 
		digit = '-';
		write(1, &digit, 1);
		n = -n;  
	}

	if (n / 10)
	{
		 
		_print_number(n / 10);
	}

 
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

 
void _printf(const char *format, ...)
{
	va_list args;

 
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;  

			if (*format == '\0')
				break;  

			if (*format == 'c')
			{
			 
				char c = va_arg(args, int);
				write(1, &c, 1);
			}
			else if (*format == 'i')
			{
				 
				long i = va_arg(args, int);
				_print_number(i);
			}
			else if (*format == 's')
			{
				 
				char *s = va_arg(args, char *);

				if (s == NULL)
					s = "(null)"; 

			 
				size_t len = 0;
				while (s[len])
					len++;

				write(1, s, len);
			}
			else if (*format == '%')
			{
				 
				char p = '%';
				write(1, &p, 1);
			}
			 
		}
		else
		{
			 
			write(1, format, 1);
		}
		format++;
	}

	 
	va_end(args);
}
