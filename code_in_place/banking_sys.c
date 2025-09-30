#include <stdio.h>
int main()
{
    int balance=1000;
    int choice,deposit,withdraw;
    
    printf("Enter the number corresponding your choice .\n");
    printf("\n1.Withdraw.");
    printf("\n2.Deposit.");
    printf("\n3.Show balance.");
    printf("\n4.Exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
                  case 1:
                       printf("\nYou have choosen to withdraw your money.");
                       printf("\nEnter the amount you want ot withdraw : ");
                       scanf("%d",&withdraw);
                       
                       if(withdraw > 1000)
                       printf("\nSorry! your withdraw amount is exceeding your balance.");
                       else
                       {
                           balance-=withdraw;
                           printf("Your remaining balance is : Rs.%d",balance);
                       }
                       break;
                       
                 case 2:
                      printf("\nYou have choosen to deposit your money.");
                      printf("\nEnter the amount you want to deposit : ");
                      scanf("%d",&deposit);
                      
                      balance+=deposit;
                      printf("\nYour current balance is : Rs.%d",balance);
                      
                      break;
                      
                case 3:
                     printf("\nYou have choosen to view your current balance.");
                     printf("Your current account balance is Rs.%d",balance);
                     break;
                     
                case 4:
                     printf("Exiting from ATM....");
                     break;
                     
                default:
                        printf("\nInvalid entry....");
                        
                        
                }
    
    getchar();
    getchar();
    return 0;
}    
    
