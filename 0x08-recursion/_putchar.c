#include <unisrd.h>

/**
 * _putchar -write the character c to the stdout
 * @c: The char to print
 * Return: On success return 1
 * On error -1 is returned and error is set accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
