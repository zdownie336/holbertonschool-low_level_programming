#include "main.h"

/**
* swap_int - used to swap values *a and *b
* @a: first value
* @b: second value
*/

void swap_int(int *a, int *b)
{
int value_a;
int value_b;

value_a = *a;
value_b = *b;
*a = value_b;
*b = value_a;
}
