//Write a function that produces output according to a format.

int _printf(const char *format, ...)
{
	int num_printed;
	va_list printf;
	va_start(printf, format);
	psuedocode
	{
		for (i = 0; i < a//a is the length of string format; i++)
		     {
			     print;
		     }
	}
	//we are trying to model the printf function. the printf function takes a format variable "some string", returns the number of characters readc through. it can take any number of type specifiers(%c%d). it prints it.
	va_end(printf);
	
	return (num_printed);
}
//string length		     
int _strlen(char *s)
{
	int i = 0;
	while (*(s + i))
	{
		i++;
	}
	return (i);
}
		     
int centCount(char *s)
{
	if (*(s + i))
	{
		if ((*(s + i)) == '%')
		{
			a++;
		}
	}
	centCount(char *(s + i));
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
