#include "dog.h"
/**
  * init_dog -  initialize a variable of type struct dog
  *
  * @d: structure dog passed
  *
  * @name: name of the dog
  *
  * @age: age of the dog
  *
  * @owner: owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(void) name;
	(void) age;
	(void) owner;
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Bob";
}
