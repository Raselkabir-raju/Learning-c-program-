#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30]="Rasel Kabir Raju";
    char str2[30];

    int i=0, len=0,j;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(i = len-1, j=0; i>=0; i--,j++)
    {
        str2[j]=str1[i];

    }
    str2[j]='\0';

    printf("str1 =%s\n",str1);
    printf("str2 = %s\n",str2);

    int d= strcmp(str1,str2);
    if(d==0)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

        
}