#include <stdio.h>
#include <string.h>
int main() {

char str1[20];
char str2[20];

printf("\nEnter any string of your choice : ");
scanf("%s",str1);

printf("\nEnter any other string of your choice : ");
scanf("%s",str2);

                 if(strcmp(str1,str2)==0)
                 {
                       printf("\nStrings are equal");
                       }
                 else
                           printf("\nStrings are not equal");

getchar();
getchar();
return 0;

}
