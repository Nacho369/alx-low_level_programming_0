#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *, char *);

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);

	return (my_dog);
}

/**
 * _strlen - Lenght of string
 *
 * @str: Syring to fimd lenght of
 *
 * Return: Lenght of @str
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * _strcopy - Copies string
 *
 * @dest: Destination to copy string to
 * @src: Source to copy string from
 *
 * Return: Dedtination of string copied
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
