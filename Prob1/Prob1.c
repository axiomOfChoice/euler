#include <stdio.h>

main()
{
   int i,total;

   total=0;

   for (i=1;i<1000;++i){

      if (i%3==0 || i%5==0)
         total=total+i;
   }

   printf("%d\n",total);
}


