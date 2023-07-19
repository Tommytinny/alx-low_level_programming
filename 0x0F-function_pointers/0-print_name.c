#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: pass the name that needs to be printed
 * @f: pointer to a function that takes a
 * single parameter of type char *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
