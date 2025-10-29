#include<stdio.h>
int main()
{
   int arr[3][3]={{1,2,3},{4,5,6},{10,11,12}};
   int i,j,sum=0;
   
   for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                                     if(i==j){
                                              sum+=arr[i][j];}
                                     }
                                              }
   printf("\nThe sum of the diagonals is : %d",sum);
   
   getchar();
   getchar();
   return 0;
}
