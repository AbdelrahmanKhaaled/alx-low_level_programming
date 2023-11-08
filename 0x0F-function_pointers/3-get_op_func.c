#include "3-calc.h"

/**
 * get_op_func - pointer to the function that
 * corresponds to the operator given as a parameter
 *
 * @s: checks input of function
 *
 * Return: returns a pointer to the function.
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
	while (i < 5)
	{
		if (s[0] && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}



