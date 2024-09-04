#include<stdio.h>
int main()
/*{//for loop1
    int i;
    for(i=0;i<10;i++)
    {
        printf("Hello\n");
    }
    return 0;
}*/
/*{//for loop2
    int i;
    for(i=1;i<10;i=i+1)
    {
        printf("%d\n",i);
    }
    return 0;
}*/
{//loop_sum
    //long long int sum = 0; to store more than 9 digits as integer can hold upto 9 digits
    int sum = 0;
    int i;
    for(i=1;i<=5;i=i+1)
    {
        sum+=i;
    
    }
    printf("%d\n",sum); //while using long long int write it "%dll"
    
    /*printf if you put outside loop then it will give a total ans 
    and if you put inside loop then it will continue printing*/
}
