#include<stdio.h>
int main()
{
    
    
    
    int num,temp,sum=0;
    
    printf("Enter number greater than 9 : ");
    scanf("%d",&num);
    
    temp=num;
    
    do
    {
        
        sum+=temp%10;
        temp/=10;
    }   
    while(temp>0);
    
    
    
    printf("\nThe sum of the digits is : %d",sum); 
    
    
    
    
    getchar();
    getchar();
    return 0;
    
    
}
