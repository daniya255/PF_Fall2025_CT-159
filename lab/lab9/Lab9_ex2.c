#include<stdio.h>
int main(){
    
    int y=5,z=6;
    int const *yptr=&y;
    printf("\n%p\n",yptr);
    *yptr=&z;
    printf("%p",yptr);
    
    getchar();
    getchar();
    return 0;
    
}

