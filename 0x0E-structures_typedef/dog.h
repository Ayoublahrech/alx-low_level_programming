#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic information
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A struct for storing a dog's basic information.
 */
typedef struct dog {
  char *name;
  float age;
  char *owner;
} dog_t;

/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to the dog struct to initialize
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: Initializes the dog struct with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog struct to print information about
 *
 * Description: Prints the name, age, and owner of the dog to the console.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: Allocates memory for a new dog struct and initializes it with the provided name, age, and owner.
 *
 * Return: Pointer to the newly created dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory associated with a dog struct
 * @d: Pointer to the dog struct to free
 *
 * Description: Frees the memory associated with the provided dog struct.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string from one memory location to another
 * @dest: Destination memory location
 * @src: Source memory location
 *
 * Description: Copies the string from the memory location pointed to by src to the memory location pointed to by dest.
 *
 * Return: Pointer to the destination memory location
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string to calculate the length of
 *
 * Description: Calculates the length of the string pointed to by s.
 *
 * Return: The length of the string
 */
int _strlen(char *s);

#endif
