#include <stdio.h>

/**
 * main - size of data types
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int m;
	long long int z;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(char c));
	printf("Size of an int: %ld byte(s)\n", sizeof(int i));
	printf("Size of long int %ld byte(s)\n", sizeof(long int m));
	printf("Size of long long int %ld byte(s)", sizeof(long long int z));
	printf("Size of a float: %ld byte(s)\n", sizeof(float f));
	return (0);
}
