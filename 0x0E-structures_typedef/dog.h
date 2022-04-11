#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - creates a new structure dog
 * @name: holds name of dog
 * @age: holds age of dog
 * @owner: holds owner of the dog
 * Description: structure dog has name, age and owner
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
