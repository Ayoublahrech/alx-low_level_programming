#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * print_dog - prints information about a dog
 * @d: pointer to struct dog to print information about
 */
void print_dog(struct dog *d);


/**
 * new_dog - creates a new struct dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: Allocates memory for a new struct dog and initializes it with the provided name, age, and owner.
 *
 * Return: Pointer to the newly created struct dog
 */
dog_t *new_dog(char *name, float age, char *owner);


/**
 * free_dog - frees the memory associated with a struct dog
 * @d: pointer to the struct dog to free
 *
 * Description: Frees the memory associated with the provided struct dog.
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
