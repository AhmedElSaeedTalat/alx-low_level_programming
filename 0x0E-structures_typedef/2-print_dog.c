#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * print_dog - prints a struct dog
  *
  * @d: struct dog
  */
void print_dog(struct dog *d)
{
	char *name, *owner, *nul;
	float age;

	if (d == NULL)
		return;

	name = d->name;
	owner = d->owner;
	age = d->age;
	nul = "(nil)";

	if (name == NULL && owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", nul, age, nul);
	else if (name == NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", nul, age, owner);
	else if (owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, nul);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
