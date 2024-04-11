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

#endif

