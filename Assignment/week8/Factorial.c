#include<stdio.h>
int main()
{
 int num,i;
 long fact=1;
 
 printf("Enter the number whose factorial you want to calculate : ");
 scanf("%d",&num);
 
 for(i=1;i<=num;i++){
         fact*=i;
         }
         
         printf("\nThe factorial of %d is : %ld",num,fact);
         
         
    getchar();
    getchar();
    return 0;
    
    
}
