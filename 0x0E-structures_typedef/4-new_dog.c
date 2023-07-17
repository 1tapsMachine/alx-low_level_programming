#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - Copy elements from a string to another.
 * @s: String.
 * @tmp: Array where it's saved.
 * Return: The array whit the elements.
 */
char *_strcpy(char *s, char *tmp)
{
	int j, i;

	for (j = 0, i = 0; s[i] != '\0'; i++, j++)
	{
		tmp[j] = s[i];
	}
	tmp[j] = '\0';

	return (tmp);
}

/**
 * _strlen - Find the lenght of a string.
 * @s: String.
 * Return: The lenght, integer.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
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
	name_tmp = malloc(strlen(name));
	if (name_tmp == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	owner_tmp = malloc(strlen(owner));
	if (owner_tmp == NULL)
	{
		free(name_tmp);
		free(my_dog);
		return (NULL);
	}


	strcpy(name_tmp, name);
	strcpy(owner_tmp, owner);


	my_dog->name = name_tmp;
	my_dog->age = age;
	my_dog->owner = owner_tmp;
	return (my_dog);
}
