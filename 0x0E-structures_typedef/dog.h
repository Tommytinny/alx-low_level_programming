#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define type for dog
 * @name: first member for name
 * @age: second member for age
 * @owner: third member for the owner
 *
 * Description: Define new type for dog
 * description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
