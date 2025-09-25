#include <stdio.h>
int main()
{
    int depart,sub_depart;
    
    printf("Enter the number corresponding to your department.");
    printf("\n1.Computer Science CS\n2.Electrical Engineering EE\n");
    printf("Enter your department : ");
    scanf("%d",&depart);
    
    switch(depart)
    {
               case 1:
                    printf("\nYour department is CSIT.");
                    printf("\nEnter the number of your specialization in CSIT.");
                    printf("\n1.CSCR (CyberSecurity)\n2.CSDS (Data Science)\n3.CSAI (Artificial Intelligence)\n4.CSGA (Gaming and Animation)\n");
                    printf("Enter the number of your specialization : ");
                    scanf("%d",&sub_depart);
                    
                    switch(sub_depart)
                    {
                                      case 1:
                                           printf("\nYour department is CSIT and your sub department is CSCR");
                                           break;
                                           
                                      case 2:
                                           printf("\nYour department is CSIT and your sub department is CSDS");
                                           break;
                                           
                                      case 3:
                                           printf("\nYour department is CSIT and your sub department is CSAI");
                                           break;
                                           
                                      case 4:
                                           printf("\nYour department is CSIT and your sub department is CSGA");
                                           break;
                                           
                                      default:
                                              printf("\nPlease enter a valid option.");
                   }
                   
                   break;
                   
                   case 2:
                        printf("\nYour department is Electrical Engineering EE..");
                        break;
                        
                   default:
                           printf("\nEnter a valid department option.");
    
 }
   
   getchar();
   getchar(); 
    return 0;
    
}
    
