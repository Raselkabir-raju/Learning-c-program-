#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two Number : ");
    scanf("%d %d", &num1,&num2);

    sum = num1 + num2;

    printf("The Sum is : %d\n",sum);

    avg = (float)sum/2;
    printf("The Average is =%.2f\n",avg);
}