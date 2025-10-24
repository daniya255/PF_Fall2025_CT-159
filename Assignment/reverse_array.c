#include <stdio.h>
int main() {
    int array1[5]={45,23,72,15,97};
    int array2[5];
    
    printf("Before reversing the array ..\n");
    for(int i=0;i<5;i++){
       printf("%d ",array1[i]);
   }

   for (int i=0,j=4;i<5,j>=0;i++,j--){
       array2[i]=array1[j];
   }
   
   printf("\nAfter reversing the array ....\n");
   for(int i=0;i<5;i++){
       printf("%d ",array2[i]);
   }

    return 0;
}
