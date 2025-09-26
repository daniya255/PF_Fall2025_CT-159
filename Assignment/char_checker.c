#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    
    printf("Input any character of your choice , it can be any character uppercase,lowercase,digit or special character");
    printf("\nEnter character here : ");
    scanf("%c",&c);
    
    if(isupper(c))//checks is character is uppercase or not
    {          
          printf("\nYour entered character is in uppercase.");
     }
     else if (islower(c))//checks is character is lowercase or not
     {
          printf("\nYour entered character is in lowercase.");
     }
     else if (isdigit(c))//checks is character is digit or not
     {
          printf("\nYour entered character is a digit.");
     } 
     else//executes if character is special character
     {
         printf("\nYour entered character is a special character.");
     } 
     
     
     getchar();
     getchar();
     
     
}    
