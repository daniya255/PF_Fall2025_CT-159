#include<stdio.h>
void user_input(int* x,int* y)
{
    printf("\nEnter the value of first number : ");
    scanf("%d",x);
    
    printf("\nEnter the value of second number : ");
    scanf("%d",y);
    
}

void sum()
{
     int x,y;
     user_input(&x,&y);
     
     int result=x+y;
     
     printf("\nThe result of the addition of %d and %d is : %d",x,y,result);
}

int main()
{
    sum();
    
    
    getchar();
    getchar();
    return 0;
    
}
