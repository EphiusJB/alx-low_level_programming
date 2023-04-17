#include <stdlib.h>
#include "dog.hh"

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, return NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, nameln, ownerln;
	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (nameln = 0; name[nameln]; nameln++)
		;

	for (ownerln = 0; owner[ownerln]; ownerln++)
		;

	ptr_dog->name = malloc(nameln + 1);
	ptr_dog->owner = malloc(ownerln + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < nameln; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (i = 0; i < ownerln; i++)
		ptr_dog->owner[i] = owner[i];
ptr_dog->owner[i] = '\0';

return (ptr_dog);
}
