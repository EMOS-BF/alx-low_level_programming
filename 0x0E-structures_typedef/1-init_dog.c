#include <stdlib.h>
#include <stdio.h>
/**
* struct dog - this descripction about which dog
* @name: First member of the struct
* @age:  second member of the struct
* @owner:  third member of the struct
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* init_dog - initialize a variable of type struct dog.
* @d: pointer to the adress to initialize.
* @name: The dog's name'.
* @age: The dog's age'.
* @owner: The dog owner's name.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
