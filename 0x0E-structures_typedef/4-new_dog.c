#include <stdlib.h>
#include "dog.h"

/**
* _copy - make copy of passed in argument
* @src: data to make copy of
* Return: pointer
*/
char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}
	for (len = 0; src[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
* new_dog - creates a new dog variable
* @name: name of dog
* @age: dog age
* @owner: owner of dog
* Return: pointer to new dog variable
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bella;
	char *new_name, *new owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	bella = malloc(sizeof(dog_t));
	if (bella == NULL)
	{
		return (NULL);
	}
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(bella);
		return (NULL);
	}
	(*bella).name = new_name;
	(*bella).age = age;
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free(*bella).name);
		free(bella);
		return (NULL);
	}
