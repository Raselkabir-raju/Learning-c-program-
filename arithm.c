//write a program that takes two integer and display sum

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter two Number : ");
    scanf("%d %d", &num1,&num2);

    sum = num1 + num2;

    printf("The Sum is : %d\n",sum);
}