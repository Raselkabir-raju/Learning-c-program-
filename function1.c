#include<stdio.h>
int sum(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter Two Numbers :");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2);

    printf("The sum is :%d\n",result);

}

int sum(int a, int b)
{
    return a+b;
}