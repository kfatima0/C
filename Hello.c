#include<stdio.h>
//standard Input and Output 

int main()//user-defined function

{   
    int rahim,karim;
    scanf("%d%d",&rahim,&karim);
    printf("%d",rahim+karim);
    
    //printf is builtin function 
    printf("Hello World");
    printf("This is a line with a newline character\n");
    printf("This is a line with a horizontal tab\tright here.\n");
    printf("This string contains a \"double quote\"\n");
    printf("This string contains a \\backslash\n");
    printf("This string contains a \'single quote\'\n");
    printf("This string contains a percent sign %%.\n");
    return 0; // closes the program
}