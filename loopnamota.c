//Enter any Number 
//num x i =num*i
//

#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter any number :");
    scanf("%d",&num );

    for(i=1; i<=10; i++)
    {
        int a=num*i; 
        printf("%d X %d = %d\n",num, i, a); 
    }
}