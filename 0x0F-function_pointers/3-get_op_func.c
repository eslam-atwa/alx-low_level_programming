#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct func
 * @s: flag.
 * Return: pointer to correct function.
 */
int (*get_op_func(char *s))(int, int);
{
	
