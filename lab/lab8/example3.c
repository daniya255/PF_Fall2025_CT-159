#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("Enter your full name : ");
    gets(name);
    
    printf("\nThe entered name is : ");
    puts(name);
    
    getchar();
    getchar();
    return 0;
    
}
