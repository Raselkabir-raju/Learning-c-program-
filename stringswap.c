#include<stdio.h>
#include<string.h>

int main(){
    char str1[50] ="Rasel";
    char str2[50] ="Raju";
    char temp[50];

    printf("Before swaping\n");
    printf("str1 =%s\n",str1);
    printf("str2 =%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swaping\n");
    printf("str1 =%s\n",str1);
    printf("str2 =%s\n",str2);

}