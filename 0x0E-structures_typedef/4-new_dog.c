#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * copy_string - copies from one string to another.
  *
  * @s: string to copy to
  *
  * @len: length of the string
  *
  * @to_copy: string to be copied from
  */

void copy_string(char *s, int len, char *to_copy)
{
	int i;

	for (i = 0; i < len; i++)
	{
		s[i] = to_copy[i];
	}
	s[i] = '\0';
}

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

	while (name[i] != '\0')
	{
		name_len++;
		i++;
	}

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	copy_string(new_dog->name, name_len, name);
	new_dog->age = age;
	i = 0;
	while (owner[i] != '\0')
	{
		owner_len++;
		i++;
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	copy_string(new_dog->owner, owner_len, owner);
	return (new_dog);
}
