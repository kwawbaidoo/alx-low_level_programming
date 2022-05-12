#include "dog.h"
#include <stdlib>
/**
 * free_dog - free dogs
 * @d: pointer to a dog of type dog_t
 * Return: nothinh
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free (d->name);
		free (d->owner);
		free (d);
	}
}
