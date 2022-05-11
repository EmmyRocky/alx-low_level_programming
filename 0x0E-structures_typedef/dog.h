#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Generates the structure dog
 *
 * @name: the number one member
 * @age: the number two member
 * @owner: the number three member
 *
 * Description: Generate the structure dog
 */
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
