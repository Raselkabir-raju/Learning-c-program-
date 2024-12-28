#include<stdio.h>
int main()
{
    char s1[30];

    printf("Enter your Name :");
    fgets(s1, sizeof(s1),stdin);

    printf("Full Name: %s\n",s1);

}