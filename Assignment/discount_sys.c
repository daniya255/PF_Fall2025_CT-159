#include <stdio.h>
int main()
{
    int cost,saved_cost,discounted_amount,discount;
    
    printf("Thanks for shopping from us....let's proceed towards billing");
    printf("\nPlease enter your total amount : ");
    scanf("%d",&cost);
    
    if(cost>0 && cost<=1999)
    {
              printf("Sorry discount is only for purchases above Rs.1999");
     }
    
    /*else if(cost>1999)
    {
                 discount=cost*0.1;
                 saved_cost=discount;
                 discounted_amount=cost-discount;
                 
                 printf("\nThe actual amount of your purchase is : Rs.%d",cost);
                 printf("\nYour total after 10 percent discount is : Rs.%d",discounted_amount);
                 printf("\nCongratulations you have saved Rs.%d",saved_cost);
    }*/
    
    else if (cost>=2000 && cost<=4000)
    {
         
                 discount=cost*0.2;
                 saved_cost=discount;
                 discounted_amount=cost-discount;
                 
                 printf("\nThe actual amount of your purchase is : Rs.%d",cost);
                 printf("\nYour total after 20 percent discount is : Rs.%d",discounted_amount);
                 printf("\nCongratulations you have saved Rs.%d",saved_cost);
    }
    
    else if (cost>=4001 && cost<=6000)
    {
                
                 discount=cost*0.3;
                 saved_cost=discount;
                 discounted_amount=cost-discount;
                 
                 printf("\nThe actual amount of your purchase is : Rs.%d",cost);
                 printf("\nYour total after 30 percent discount is : Rs.%d",discounted_amount);
                 printf("\nCongratulations you have saved Rs.%d",saved_cost);
                 
   }
   
   else if(cost>6000)
   {
                 discount=cost*0.5;
                 saved_cost=discount;
                 discounted_amount=cost-discount;
                 
                 printf("\nThe actual amount of your purchase is : Rs.%d",cost);
                 printf("\nYour total after 50 percent discount is : Rs.%d",discounted_amount);
                 printf("\nCongratulations you have saved Rs.%d",saved_cost);  
   }
   
   getchar();
   getchar();
   return 0;
   
}   
