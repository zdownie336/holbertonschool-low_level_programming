#include "function_pointers.h"
/**
* print_name - used to print name of person
* @name: name location of person
* @f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
