#include"main.h"

void print_buffer(char buffer[], int *buff_
		ind);
/**
 *_printf - printf function
 *@format:format
 *@...:continue
 *Return:print chars
 **/
int _printf(const char *format, ...)
{
	int i, printed = 0, print_char = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff ind == BUFF SIZE);

			print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags - get_flags(format, &i);
			width - get_width(format, &i, list);
			precision - get precision(format, &i, list);
			size  get_size(format, &i);
			++i;
			printed - handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed
		}
	}

	printed_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}
/**
 *printf_buffer - prints the content of buffer if it exist
 *@buffer:array of chars
 *@buff_ind:index at which to add next char, represents the length
 **/
void printf_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
