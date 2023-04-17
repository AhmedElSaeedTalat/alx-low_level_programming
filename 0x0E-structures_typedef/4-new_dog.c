#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - creates a new dog.
  *
  * @name: name of the dog
  *
  * @age: age of the dog
  *
  * @owner: owner of the dog
  *
  * Return: new created dog object
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_len, owner_len;

	i = name_len = owner_len = 0;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[i++])
		name_len++;

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	while (owner[i++])
		owner_len++;

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = owner;
	return (new_dog);
}
