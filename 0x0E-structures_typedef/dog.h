#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data for dogs
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new typedef name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
