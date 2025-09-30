#include <stdio.h>
int main()
{
                
    int oper1,oper2;
    char op;
    
    printf("\nEnter the first operand of your choice : ");
    scanf("%d",&oper1);
    
    printf("\nEnter the second operand of your choice : ");
    scanf("%d",&oper2);
    
    printf("\nEnter the operation that you want to perform : ");
    scanf(" %c",&op);
    
    switch(op)
    {
              case '+':
                   printf("\nYou have choosen addition as your operation.");
                   printf("\n%d + %d = %d",oper1,oper2,oper1+oper2);
                   break;
                   
              case '-':
                    printf("\nYou have choosen subtraction as your operation.");
                   printf("\n%d - %d = %d",oper1,oper2,oper1-oper2);
                   break;
                   
               case '*':    
                    printf("\nYou have choosen multiplication as your operation.");
                    printf("\n%d * %d = %d",oper1,oper2,oper1*oper2);
                   break;   
                   
              case '/':
                        
                        if(oper2!=0){
                                      printf("\nYou have choosen division as your operation.");
                                       printf("\n%d / %d = %d",oper1,oper2,oper1/oper2);
                                       break;
                                       }
                         else
                         printf("\nA number can't be divided by zero.");
                         
                       break;
                       
                 case '%':
                         if(oper2!=0){
                                      printf("\nYou have choosen modulus as your operation.");
                                       printf("\n%d %% %d = %d",oper1,oper2,oper1%oper2);
                                       break;}
                         else
                         printf("\nA number can't be divided by zero.");
                         
                       break;
                       
                 default:
                         printf("\nEnter a valid operator.");
                         
                         }*/
                          
    
                       
    
    
    
    
    getchar();
    getchar();
    return 0;
}    
    
