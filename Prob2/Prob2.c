#include <stdio.h>

#define FIB_LIM 4000000

main(){

   long int fib1,fib2;
   long int sum;

   fib1=1;
   fib2=2;
   sum=0;

   while (fib2<=FIB_LIM){
      

      if (fib2%2==0){
          sum=sum+fib2;
      }

      printf("%8ld  %8ld\n",fib2,sum);
      
      fib2=fib1+fib2;
      fib1=fib2-fib1;
      
   }
   
}






