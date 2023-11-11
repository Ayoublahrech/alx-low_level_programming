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

    /* Allocate memory for the struct dog */
    d = malloc(sizeof(struct dog));

    /* Check if allocation was successful */
    if (d == NULL) {
        return;
    }

    /* Initialize struct dog members */
    d->name = name;
    d->age = age;
    d->owner = owner;
}
