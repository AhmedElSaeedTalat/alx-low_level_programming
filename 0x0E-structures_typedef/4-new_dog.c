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

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = owner;
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
