#ifndef MAIN_H
#define MAIN_H
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: input struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif