#include <stdio.h>
/**
 * main - entry point of program
 *
 * Return: Always return 0 if successful
 *
 */

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;
	/* sizeof returns size of type */
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
