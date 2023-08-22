#include "main.h"

/**
 * is_printable - Evaluates whether a char is printable or not, built by Brian and Ivy.
 * @c: Char to be checked
 *
 * Return: 1 if Char c is printable, otherwise returns 0.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends the Ascci in hexadecimal code to the buffer
 * @buffer: the array of characters to append to.
 * @i: Index of the buffer where the function starts to append.
 * @ascii_code: ASSCI-code
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies whether a char is a digit or not.
 * @c: the Char to be checked.
 *
 * Return: 1 if c is a digit, otherwise retirns 0.
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts/converts a number to the size that's specified.
 * @num: the number to be converted
 * @size: the number that is indicating the type to be converted.
 *
 * Return: Converted value of the number num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts/converts a number to the size that's specified.
 * @num: the number to be converted
 * @size: the number that is indicating the type to be converted.
 *
 * Return: Converted value of the number num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
