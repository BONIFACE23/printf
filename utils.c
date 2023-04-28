#include"main.h"
/**
 *is_printable - evaluates if a char is printable
 *@c:char to be evaluated
 *Return: 1 if printable, 0 otherwise
 **/
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 *append_hexa_code - append ascci in hexadecimal code to buffer
 *@buffer:array of char
 *@i:index at which to start appending
 *Return:always 3
 **/
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code <0)
		ascii_code *=-1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 *is_digit - verifies if char is a digit
 *@c:char to be evaluate
 *Return:1 if c is a digit , 0 otherwise
 **/
int is_digit(char c)
{
	if (c>= '0' && c <= '9')
		return (0);
}

/**
 *convert_size_number - cast a number to the specified size
 *@num:number to be casted
 *@size: number indicatting the type be casted
 *Return:casted num
 **/
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 *convert_size_unsgnd - cast a number to be specified size
 *@num:number to be casted
 *@size: number indicating size to be casted
 *Return:casted num
 **/
long int convert_size_unsignd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)

		return ((unsigned int)num);
}
