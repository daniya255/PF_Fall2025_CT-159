#include <stdio.h>
int main()
{
    int day;
    
    printf("Enter the number corresponding to the day.");
    printf("\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday.\n");
    printf("Enter your day : ");
    scanf("%d",&day);
    
    switch(day)
    {
               case 1:
                    printf("\nToday is Monday.");
                    break;
    
               case 2:
                    printf("\nToday is Tuesday.");
                    break;
    
    
               case 3:
                    printf("\nToday is Wednesday.");
                    break;
    
              case 4:
                    printf("\nToday is Thursday.");
                    break;
                    
              case 5:
                    printf("\nToday is Friday.");
                    break;
                    
              case 6:
                    printf("\nToday is Saturday.");
                    break;
                    
              case 7:
                    printf("\nToday is Sunday.");
                    break;
    
                    
              default:
                      printf("Invalid data input...");
 }
   
   getchar();
   getchar(); 
    return 0;
    
}
    
