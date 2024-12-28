#include<stdio.h>
#include<math.h>
int main(){

    int x;
    printf("Enter any Number :");
    scanf("%d",&x);
    
    double result = sqrt(x);
    printf("%.2lf",result);
}