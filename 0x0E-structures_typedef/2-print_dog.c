#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the structure of the dog
 * @d: the entity
 *Return: 0 (success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("nil\n");
	else
		printf("Age: %d\n", d->age);

	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
