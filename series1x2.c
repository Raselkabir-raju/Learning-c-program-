//1*2*3*4*......*n

#include<stdio.h>
int main()
{
    int i,n,result=1;
    
    printf("Enter N :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        result = result*i;
    }
    printf("%d\n",result);
}