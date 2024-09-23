#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1\n");
    }
    else 
    {
       for(int i=1;i<=n;i=i+1)//integer i declared in for loop
       {
           if(i%2==0)
           {
               printf("%d\n",i);
           }
       }
    }
    return 0;
    
}