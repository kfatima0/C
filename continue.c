#include<stdio.h>
int main()
{
    int i,n;
    for(i = 1; i <=10; i = i + 1)
    {
        if(i == 5)
        {
            continue;// continue statement is used to skip the the loop's current iteration. because of this 5 didnt printed
        }
        printf("%d\n", i);
    }  
    return 0;


}