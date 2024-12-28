//write a program that read 10 number and display their sum and average.


#include<stdio.h>
int main()
{
    int a[10];

    printf("Enter 10 numbers: ");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum;
    for(int i=0; i<10; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/10);

}