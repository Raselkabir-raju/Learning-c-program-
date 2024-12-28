//x to the power y using user defined function


#include<stdio.h>
void calculatePower(double base, double exp)
{
    double result=1,i;
    for(i=1; i<=exp; i++)
    {
        result = result *base;

    }
    printf("%.1lf\n",result);
}
int main()
{
    double base,exp;

    printf("Enter Base:");
    scanf("%lf",&base);
    printf("Enter Exponent :");
    scanf("%lf",&exp);

    calculatePower(base,exp);
    
}
