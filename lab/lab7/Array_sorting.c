#include<stdio.h>
int main()
{
    int arr[5]={5,2,9,1,3};
    int i,j,temp;
    
    printf("\nThe array before sorting.. \n");
    for(i=0;i<5;i++){
                     printf("%d ",arr[i]);
                     }
    printf("\n");
                     
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
                }}
                
    printf("\nThe array after sorting.. \n");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
        }
        
   getchar();
   getchar();
   return 0;
   
}
                
