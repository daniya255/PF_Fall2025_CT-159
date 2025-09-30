#include<Stdio.h>
int main()
{                      
    
    int day;
    char time;

    printf("Enter the number corresponding your choice .");
    printf("\n1. Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday");
    printf("\nEnter your day : ");
    scanf("%d", &day);

    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("\nEnter time of the day (M for Morning and E for Evening): ");
            scanf(" %c", &time);
            
            switch(time) {
                case 'M':
                    printf("\nGo to Class");
                    break;
                case 'E':
                    printf("\nDo Homework");
                    break;
                default:
                    printf("\nInvalid time");
            }
            
            break;
            
        case 6:
        case 7:
            printf("\nEnter time of the day (M for Morning and E for Evening): ");
            scanf(" %c", &time);
            switch(time) {
                case 'M':
                    printf("\nPlay Sports");
                    break;
                case 'E':
                    printf("\nWatch Movie");
                    break;
                default:
                    printf("\nInvalid time");
            }
            break;
        default:
            printf("\nInvalid day");
    }

    
                   
    
                       
    
    
    
    
    getchar();
    getchar();
    return 0;
}    
    
