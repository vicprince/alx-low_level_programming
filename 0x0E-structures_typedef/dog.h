#ifndef _DOG_
#define _DOG_

/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
