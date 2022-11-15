#ifndef DOG_H
#define DOG_H

/**
 *struct dog - check code
 *@name: name
 *age: age
 *owner: the owner
 *Description: dog dtruct
 **/

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

#endif /*DOG_H*/

