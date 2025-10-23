#include<stdio.h>
int main()
{
    int no_of_students;
    
    printf("\nEnter the number of students : ");
    scanf("%d",&no_of_students);
    
    int marks[no_of_students],i,j;
    
    for(i=0;i<no_of_students;i++){
         printf("\nEnter marks of student %d : ",i+1);
         scanf("%d",&marks[i]);
         }
         
         for(i=0;i<no_of_students;i++){
         printf("\nThe  marks of student %d is %d ",i+1,marks[i]);
         }
         
         
    return 0;
    getchar();
    getchar();
    
}
         
         
    
    
