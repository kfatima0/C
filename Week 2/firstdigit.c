//P.first digit problem of codeforces
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int digit = x/1000;
    if(digit%2 == 0)
    {
        printf("EVEN\n");
    }
    else 
    {
        printf("ODD\n");
    }
        return 0;
}
/* code to get the first digit from a 4digit number
manually we divide a four digit number by 1000 and take the quotient as 
first number.
int main
{    
   int x;
   scanf("%d", &x)
   int ans = x/1000;
   printf("%d\n",ans);
   return 0;
}*/