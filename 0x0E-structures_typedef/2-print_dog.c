#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a dog struct
 * @d: the struct to initialize
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
