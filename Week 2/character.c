#include<stdio.h>
int main()
{
     char a;
     scanf("%c",&a);
     if(a>='a' && a<='z')
     {
          // small letter
          int ans = a - 32;
          printf("%c",ans);
     }
     else
     /*int ans again declared in else because of scope/block {} 
     when a variable is declared in if it can accessed only in that {} block
     so we have to again declare in else int ans*/
     {
         //capital letter
         int ans = a + 32;
         printf("%c",ans);
     }
     return 0;
}