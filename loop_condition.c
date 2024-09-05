#include<stdio.h>
int main()
{
   int i;
   for(i = 1; i <=10; i += 1)
   {
       if(i % 2 == 0)
       // if i is divisible by 2 (i % 2 == 0), even numbers will be printed
       // if (i % 2 == 1), odd numbers will be printed
       {
        printf("%d - Even\n", i);
       }
       else 
       {
        printf("%d - Odd\n", i);
       }
   }
   return 0;

}