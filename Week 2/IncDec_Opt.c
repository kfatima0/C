#include<stdio.h>
int main()
{
    int i = 10;
    int x = i++;
    printf("x-%d i-%d",x,i);
    return 0;
}
//output x-10 i-11
//++i
{
    int i = 10;
    int x = ++i;
    printf("x-%d i-%d",x,i);
    return 0;
}
//x-11 i-11
//i--
{
    int i = 10;
    int x = i--;
    printf("x-%d i-%d",x,i);
    return 0;
}
//x-10 i-9
//--i
{
    int i = 10;
    int x = --i;
    printf("x-%d i-%d",x,i);
    return 0;
    
}
//x-9 i-9