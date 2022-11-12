#include <stdio.h>
#include <math.h>

int main()
{
	int a = 6, b = 19, result;
	float result1;

	// Addition
	result = a + b;
	printf("Addition of a & b is %d\n", result);

	// Subtraction
	result = b - a;
	printf("Subtraction of a from b is %d\n", result);
	
	// Division
	result1 = b / a;
	printf("Division of b & a is %2f\n", result1);

	return 0;
}
