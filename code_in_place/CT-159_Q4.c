#include <stdio.h>
int main()
{
    int score =0;
    char round_score;
    
    printf("Enter the score of this round as W=win and L=lose : ");
    scanf("%c",&round_score);
    
    if(round_score=='W')
    {
            score+=1;
            printf("Your total score is : %d",score);
    }
    else if(round_score=='L')
    {
         score-=1;
         printf("Your total score is : %d",score);    
    } 
    
   else
   {
       printf("Invalid input..");
   }         
     
     getchar();
     getchar();
     return 0;
     
}    
