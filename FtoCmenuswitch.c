#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter Your choice :");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            printf("Enter the Fahrenheit temperature : ");
            scanf("%f", &temp);
            convertedTemp = (temp-32)/1.8;
            printf("The temperrature in celsius is :%f\n",convertedTemp);
            break;

        }
        case 2:
        {
            printf("Enter the celsius temperature : ");
            scanf("%f", &temp);
            convertedTemp = (1.8*temp)+32;
            printf("The temperrature in Fahrenheit is :%f\n",convertedTemp);
        }

        default:
            printf("Not a correct option");

    }
}