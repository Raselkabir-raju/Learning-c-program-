#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Rasel Kabir";
    char str2[]="Raju";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("String are Equal");
    } 
    else
        printf("String are not Equal");
}