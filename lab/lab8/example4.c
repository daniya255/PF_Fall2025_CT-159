#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any random string here : ");
    gets(str);
    
    printf("\nThe entered string's length is : %d ",strlen(str));
    
    
    getchar();
    getchar();
    return 0;
    
}
