#include<stdio.h>
int cube(int x){
     return x*x*x; 
     }
int main()
{
  int n,result;
  
  printf("\nEnter the integer whose cube you want to calculate : ");
  scanf("%d",&n);
  
  result=cube(n);
  
  printf("\nThe cube of %d is %d",n,result);
    
    getchar();
    getchar();
    return 0;
    
}

