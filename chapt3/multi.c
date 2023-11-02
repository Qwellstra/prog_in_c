#include <stdio.h>

/**
 * main - A function to display the values of operations
 * value1: an int to be added
 * value2: a second int to be added
 * sum: the result of adding two different values
 * return: 0 for success
 */
int main(void)
{
	int value1, value2, sum;

	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return (0);
}
