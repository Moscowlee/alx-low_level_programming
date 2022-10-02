#include <stdio.h>
#include "main.h"

/**
 * main - this prints d number of arguments
 * @argc: Num of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
