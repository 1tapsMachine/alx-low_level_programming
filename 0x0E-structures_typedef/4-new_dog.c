#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


	strcpy(name_tmp, name);
	strcpy(owner_tmp, owner);


	my_dog->name = name_tmp;
	my_dog->age = age;
	my_dog->owner = owner_tmp;
	return (my_dog);
}
