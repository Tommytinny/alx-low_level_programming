#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given
 * as a parameter on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the funtion
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (array[i] < size)
		action(array[i++]);
}
