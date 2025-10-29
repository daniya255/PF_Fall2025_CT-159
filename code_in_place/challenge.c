#include <stdio.h>
#include <string.h>
int main() {

char str1[]="Programmming";
char str2[20];

strncpy(str2,str1,4);
str2[4]='\0';

printf("\nThe resultant string is : %s",str2);

getchar();
getchar();
return 0;

}
