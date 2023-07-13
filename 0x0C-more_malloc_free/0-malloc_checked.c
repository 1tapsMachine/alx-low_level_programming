#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == INT_MAX)
		exit(98);

	ptr = (void *) malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
