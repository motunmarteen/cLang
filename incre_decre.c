#include <stdio.h>

int main() 
{
   int a = 10, b = 20, c, d;

   //Using increment operator
   printf("Incrementing value of a = %d \n", ++a);
 
   //Using decrement operator
   printf("Decrementing value of b = %d \n", --b);

   // first print value of a, then decrement a
   printf("Decrementing value of a = %d \n", a--);
   printf("Value of a = %d \n", a);

   // first print value of b, then increment b
   printf("Incrementing value of b = %d \n", b++);
   printf("Value of b = %d \n", b);

   return 0;

}
