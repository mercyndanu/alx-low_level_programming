#ifndef _DOG_FILE_
#define _DOG_FILE_

/**
 * struct dog - Dog attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: The attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
