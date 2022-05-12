#include <stdio.h>
#include "dog.h"
/**
 * main - check the code 
 *
 * Retrun: Always 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Sparrow" 4.0, "Jack");
	printf("My name is %s, and i am %.1f :) - wolf!\n", my_dog->name, my_dog_>age);
	free_dog(my_dog);
	return (0);
}
