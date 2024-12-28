#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[]="Rasel Kabir Raju";

   // strupr(str);
    for(int i=0; str[i]!='\0'; i++){
        str[i]=toupper(str[i]);
    }
    printf("str=%s\n",str);
}


//touppercase function #include<ctype.h>
//for(int i=0; str[i]!='\0'; i++)
//str[i]=toupper(str[i]);