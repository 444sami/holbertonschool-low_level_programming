#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 * Return: NULL if fails, pointer if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;

	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->owner, owner);
	return (p);
}
