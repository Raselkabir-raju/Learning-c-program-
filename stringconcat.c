#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50]="My name is\n";
    char str2[]="Rasel Kabir Raju";

    strcat(str1,str2);

    printf("Str1 =%s\n",str1);
}