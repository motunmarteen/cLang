#include <stdio.h>

int main()
{
	int a = 10, b = 5, x;
	
	x = (a==b) ? (a+b) : (a-b);
	printf("The value of x is %d \n", x);
}
