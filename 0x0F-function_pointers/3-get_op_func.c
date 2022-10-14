#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct operation toperform
 * @s: operation to perform
 * Return: pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (1 < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
