#include<stdio.h>
int main()  
   {
        int n,i,j;
        
        printf("Enter the range till you want to find even sum : ");
        scanf("%d",&n);
        
        
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
               int sum=i+j;
               if(sum%2==0)
               {
                           printf("\n(%d,%d)",i,j);
               }
               
            }
            
            printf("\n");
            
        }
    
    
    
    
    getchar();
    getchar();
    return 0;
    
    
}
