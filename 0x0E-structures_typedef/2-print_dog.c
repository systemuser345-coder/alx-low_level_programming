#include "dog.h"

/**
 * print_dog - prints a dog structure in formatted strings
 * @d: the structure data type
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);

}
