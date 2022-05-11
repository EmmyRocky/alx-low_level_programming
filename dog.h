#ifndef  HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - This generates the structure dog
 *
 * @name: member number one
 * @age: member number two
 * @owner: member number three
 *
 * Description: Generates the structure dog
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
