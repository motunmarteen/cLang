#include <stdio.h>

int main()
{
	int age;
	char address;
	char name;
	int phone_number;

	printf("What is your name?\n");
	scanf("%c", &name);

	printf("How old are you?\n");
	scanf("%d", &age);

	printf("Where do you live?\n");
	scanf("%c", &address);

	printf("What is your phone number?\n");
	scanf("%d", &phone_number);

	return 0;
}
