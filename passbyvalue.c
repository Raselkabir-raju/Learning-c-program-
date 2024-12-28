#include<stdio.h>
void modifyvalue(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int num =10;
    printf("Before modification :%d\n",num);

    modifyvalue(&num);
    
    printf("After modification :%d\n",num);
}