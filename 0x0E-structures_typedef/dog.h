#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - Define a new type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef FUNCTIONS_i
#define FUNCTIONS_i
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
