#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	float floatType;
	long longType;
	long long longlongType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
