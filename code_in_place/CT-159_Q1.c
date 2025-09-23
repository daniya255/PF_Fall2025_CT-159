#include <stdio.h>
int main()
{
    int age,weight;
    
    printf("Enter your age : "); //inputting age for checking eligibility
    scanf("%d",&age);
    
    
    if(age>=18)
    {
                printf("Enter your weight in kgs : "); //taking weight as input
                 scanf("%d",&weight);
    
               
               if(weight>=50)
               printf("You are eligible to donate blood.");
               
               else
               printf("You are under-weight, that's why you canit donate blood.");
    } 
    else
    {
        printf("The minimum age for donating blood is 18 years.");
     }
     
     getchar();
     getchar();
     return 0;
     
}    
