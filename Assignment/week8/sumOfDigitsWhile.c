#include<stdio.h>
int main()
{

   
    int num,temp,rev=0;
    
    printf("Enter number greater than 9 : ");
    scanf("%d",&num);
    
    
    temp=num;  
    while(temp>0)
    {
                  
                 rev=rev*10 + (temp%10);
                 temp/=10;
                 
     }
    
    
    printf("\nThe reversed number is : %d",rev);
    
    
     
    getchar();
    getchar();
    return 0;
    
    
}
