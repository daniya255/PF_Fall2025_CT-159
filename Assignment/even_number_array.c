#include<stdio.h>
int main()
{
    int size,count=0;
    
    printf("Enter the size of your array :");
    scanf("%d",&size);
    
    int array[size];
    
    for (int i=0;i<size;i++){
        printf("\nEnter the element at index %d : ",i);
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            count+=1;
        }
    }
    
    printf("\nThe total even numbers in the array are : %d",count);
    
    
    return 0;
    
}
