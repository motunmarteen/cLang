#include <stdio.h>

int main()
{
	char letters;
	printf("What letter are you starting from?\n");
	scanf("%c", &letters);

	for(letters; letters <= 'z'; letters++)
		printf("%c\t\n", letters);
	return 0;
}
