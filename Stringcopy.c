#include <stdio.h>
#include <string.h>
void main() {
    char str[10],str1[10];
    printf("enter the string ");
    scanf("%s",str);
    strcpy(str1,str);
    printf("%s",str1);
}