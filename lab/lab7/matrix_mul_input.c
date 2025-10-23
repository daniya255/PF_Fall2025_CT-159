#include<stdio.h>
int main()
{
    
    int row1,row2,col1,col2;
    
    printf("\nEnter the number of rows in matrix one : ");
    scanf("%d",&row1);
    
     printf("\nEnter the number of columns in matrix one : ");
    scanf("%d",&col1);
    
     printf("\nEnter the number of rows in second matrix : ");
    scanf("%d",&row2);
    
     printf("\nEnter the number of columns in second matrix  : ");
    scanf("%d",&col2);
    
    if(col1!=row2){
                   return 0;
                   }
    
    int arr[row1][col1],brr[row2][col2],i,j,k;
    
    printf("\nEnter the elements of first matrix .");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
           printf("\nEnter the element at address {%d,%d} : ",i,j);
           scanf("%d",&arr[i][j]);
           }}
          
          
       printf("\nEnter the elements of second matrix ."); 
       for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
           printf("\nEnter the element at address {%d,%d} : ",i,j);
           scanf("%d",&brr[i][j]);
           }
           }
           
    int crr[row1][col2];
  
    
    for(i=0;i<row1;i++){
         for(j=0;j<col2;j++){
             crr[i][j]=0;
             for(k=0;k<col1;k++){
                              crr[i][j]+=arr[i][k]*brr[k][j];
                              }
                           }
                    }
    for(i=0;i<row1;i++){
         for(j=0;j<col2;j++){
                         printf("%d  ",crr[i][j]);
                         }
                   printf("\n");
                   }                 
    
                          
         
         
  
    getchar();
    getchar();
    return 0;
}    

 
