#include <stdio.h>

int main() {

   int a = 1, b = 0, result;

   // And
   result = (a && b);
   printf("a && b = %d \n",result);

   // Or
   result = (a || b);
   printf("a || b = %d \n",result);

   // Not
   result = !a;
   printf("!a = %d \n",result);

   return 0;

}
