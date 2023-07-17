#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strcpy - copies the string pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest
*
* @dest: pointer to the buffer in which we copy the string
* @src: pointer to the string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}

/**
  * new_dog - Creates a new dog.
  * @name: Name.
  * @age: Age.
  * @owner: Owner.
  *
  * Return: Pointer to new dog.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_tmp;
	char *owner_tmp;

	dog_t *my_dog;


	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	name_tmp = malloc(sizeof(name));
	if (name_tmp == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	owner_tmp = malloc(sizeof(owner));
	if (owner_tmp == NULL)
	{
		free(name_tmp);
		free(my_dog);
		return (NULL);
	}


	_strcpy(name_tmp, name);
	_strcpy(owner_tmp, owner);


	my_dog->name = name_tmp;
	my_dog->age = age;
	my_dog->owner = owner_tmp;
	return (my_dog);
}
