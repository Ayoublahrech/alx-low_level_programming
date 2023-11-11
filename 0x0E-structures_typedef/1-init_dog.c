#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable with the given values.
 *
 * @d: Pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Check for NULL pointer */
    if (d == NULL) {
        return;
    }

    /* Allocate memory for the name and owner strings */
    d->name = malloc(strlen(name) + 1);
    d->owner = malloc(strlen(owner) + 1);

    /* Check if allocation was successful */
    if (d->name == NULL || d->owner == NULL) {
        free(d->name);
        free(d->owner);
        return;
    }

    /* Copy the name and owner strings to the allocated memory */
    strcpy(d->name, name);
    strcpy(d->owner, owner);

    /* Initialize struct dog members */
    d->age = age;
}
