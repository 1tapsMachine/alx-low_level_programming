#ifndef __DOG_H__
#define __DOG_H__

/**
  * struct dog - Structure.
  * @name: Name.
  * @age: Age.
  * @owner: Owner.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
