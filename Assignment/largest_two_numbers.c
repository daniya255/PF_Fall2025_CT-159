#include<stdio.h>
int main()
{
    int size,largest=0;
    
    printf("Enter the size of your array :");
    scanf("%d",&size);
    
    int array[size],max[2];
    
    for (int i=0;i<size;i++){
        printf("\nEnter the element at index %d : ",i);
        scanf("%d",&array[i]);
    }
    
    if(array[0]>array[1]){
        max[0]=array[0];
        max[1]=array[1];
    }
    else
    {
        max[0]=array[1];
        max[1]=array[0];
    }
    
    for (int i=2;i<size;i++){
        if(array[i]>max[0]){
            max[1]=max[0];
            max[0]=array[i];
        }
        else if(array[i]>max[1] && array!=max[0]){
            max[1]=array[i];
        }
            
        }
        
        printf("\nThe two largest numbers from your inputted array are : {%d , %d}",max[0],max[1]);
            
    

    
    return 0;
    
}
