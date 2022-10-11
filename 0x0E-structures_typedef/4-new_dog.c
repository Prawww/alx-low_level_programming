#include "dog.h"

int _strlen(char *str)
{
	int len = 0;
	while (str)
		len++;

	return (len);
}
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] ; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
/**
 * *new_dog - creates a new dog
 * *@name: name of new dog
 * *@age: age of new dog
 * *@owner: owner of new dog
 * *Return: returns NULL in case
 * *of failure
 * */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bosco = malloc(sizeof(dog_t));
	if (bosco == NULL)
		return (NULL);

	bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bosco->name == NULL)
	{
		free(bosco);
		return (NULL);
	}

	bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bosco->owner == NULL)
	{
		free(bosco->name);
		free(bosco);
		return (NULL);
	}

	bosco->name = _strcopy(bosco->name, name);
	bosco->age = age;
	bosco->owner = _strcopy(bosco->owner, owner);

	return (bosco);
}
