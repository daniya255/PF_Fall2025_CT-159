#include<Stdio.h>
int main()
{
    int depart,year;
    
    printf("Enter the number corresponding your choice .\n");
    printf("1.Computer Science(CS)\n2.Electrical Engineering(EE)\n");
    printf("Enter your department : ");
    scanf("%d",&depart);
    
    switch(depart){
                   case 1:
                        printf("\nEnter the year of your degree.");
                        printf("\n1.First year\n2.Second year.");
                        printf("Enter year : ");
                        scanf("%d",&year);
                        
                        switch(year){
                                     case 1:
                                          printf("\nYour courses this year are.");
                                          printf("\n1.ICP\n2.PF (Programming Fundamentals)\n3.FE (Functional English)\n4.IJ (Introduction to Java)\n5.ITFA (IT Fundamentals\n");
                                          break;
                                     
                                     case 2:
                                                 printf("\nYour courses this year are.");
                                                 printf("\n1.OOPS (Object Oriented Porgramming\n2.DSA (Data Structure and Algorithms\n3.Calculas\n4.OS Fundamentals\n5.ES (Islamiat)\n");
                                                 break;
                                    
                                    default:
                                            printf("\nEnter a valid chocie");
                                            
                                            }
                        break;
                        
                        case 2:
                                 printf("\nEnter the year of your degree.");
                                 printf("\n1.First year\n2.Second year.");
                                 printf("Enter year : ");
                                 scanf("%d",&year);
                                 
                                  switch(year){
                                     case 1:
                                          printf("\nYour courses this year are.");
                                          printf("\n1.ICP\n2.FE (Functional English)\n3.Calculas\n4.Electronics I\n5.Logic Designs\n");
                                          break;
                                          
                                     case 2:
                                                 printf("\nYour courses this year are.");
                                                 printf("\n1.Network Analysis\n2.Circuit Analysis\n3.ES (Islamiat)\n4.Differential Equations\n5.Physics II\n");
                                                 break;
                                                 
                                                 
                                     default:
                                                 printf("\nEnter a valid chocie");
                                            
                                            }
                        break;
                        default:
                                printf("Enter a valid deapartment from the options\n");
                                
                   }
                   
                   
             getchar();
             getchar();
             return 0;
             
}         
                                          
                                      
