#include "primenumber.h"
int main(){}
/*int primenumber(int);
main()
{
   int n,result;

   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);

   result=primenumber(n);

   if ( result ==1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);

   return 0;
}
*/
int primenumber(int number)
{
   int c;

   for ( c = 2 ; c <= number - 1 ; c++ )
   {
      if ( number%c == 0 )
     return 0;//not a prime number
   }
   return 1;// a prime number
}
