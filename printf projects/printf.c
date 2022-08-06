//Write a function that produces output according to a format.

int _printf(const char *format, ...)
{
	int num_printed;
	va_list printf;
	va_start(printf, format);
	
	va_end(printf);
	
	return (num_printed);
}
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
