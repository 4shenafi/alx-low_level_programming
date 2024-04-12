#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure named dog
 * @name: Pointer to a char, representing the dog's name
 * @age: Float, representing the dog's age
 * @owner: Pointer to a char, representing the dog's owner
 *
 * Description: This structure represents a dog, with its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

