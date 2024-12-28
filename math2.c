#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    printf("Enter number x = ");
    scanf("%lf",&x);

    double result = log(x);
    
    printf("log(%lf) =%lf\n",x,result);
    
}