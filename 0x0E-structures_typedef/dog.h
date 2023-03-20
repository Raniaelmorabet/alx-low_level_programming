#ifndef DOG_H
#define DOG_H
/**
  * struct dog - prototype for a dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  *
  * Description: this is prototype for the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
