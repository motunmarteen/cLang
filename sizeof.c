#include <stdio.h>

int main() {

   int a = 20;
   char b = 'B';
   double c = 17349494.249324;

   // sizeof operator
   printf("Size of a is: %d \n", sizeof(a));
   printf("Size of b is: %d \n", sizeof(b));
   printf("Size of c is: %d \n", sizeof(c));

   // & operator
   printf("Memory address of a: %d \n", &a);

   return 0;

}
