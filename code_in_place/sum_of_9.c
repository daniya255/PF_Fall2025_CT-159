#include<stdio.h>
int main()
{
    int i=1,j,k;
    
    do
    {
        j=1;
        do
        {
            k=1;
                    do
                    {
                         if(i+j+k==9)
                         printf ("\n%d + %d + %d = %d",i,j,k,i+j+k);
                         k++;
                    }
                    while(k<=10);
                    
                    j++;
                    }
                    
                    while(j<=10);
                    
                    i++;
                    }
                    while(i<=10);   
                    
                      
    
    getchar();
    getchar();
    return 0;
    
    
}
