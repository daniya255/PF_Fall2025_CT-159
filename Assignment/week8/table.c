#include<stdio.h>
int main()
{
    
    
    int i=1,j;
    
    while(i<=5){
                j=1;
         while(j<=10)
         {
            printf("%d * %d = %d",i,j,i*j);
            printf("\n");
            
            j++;
         }
    printf("\n");     
    i++;
    
    }
    
        
    
    
    
    getchar();
    getchar();
    return 0;
    
    
}
