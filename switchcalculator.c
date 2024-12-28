#include<stdio.h>

int main() {
    int num1, num2;
    char oper;

    printf("Calculator: ");
    scanf("%d %c %d", &num1, &oper, &num2);

    switch(oper) {  
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {  
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Not a valid operator\n");
    }

    return 0;
}