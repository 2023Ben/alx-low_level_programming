#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Program that declare variable
* @d: pointer to struct
* @name: pointer to name
* @age: pointer to age
* @owner: pointer to owmer
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
else
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}

}
