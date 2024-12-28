//1+2+3+......+N

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last Number of the series :");
    scanf("%d",&n);

    printf("1+2+3+.....+%d",n);

    for(i=1; i<=n; i=i+1)
    {
        sum = sum + i;

    }
    printf(" = %d\n",sum);
}