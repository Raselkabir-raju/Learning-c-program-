#include<stdio.h>
int main()
{
    int i,num[]={10,2,15,20,25,46,85};

    int value,pos=-1;

    printf("Enter the Value you want to search :");
    scanf("%d", &value);

    for(i=0; i<7; i++)
    {
        if(value==num[i])
        {
            pos =i+1;
            break
        }
    }
    
    if(pos==-1)
    {
        printf("Item is not Found");
    }
    else{
        printf("The Value is found at %d position ", pos);
    }
}