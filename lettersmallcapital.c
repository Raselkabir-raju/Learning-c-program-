#include<stdio.h>

int main() {
    char ch;
    printf("Enter Letter: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        printf("Capital \n");
    }

    else if (ch >= 'a' && ch <= 'z') {
        printf("Small\n");
    }
 
    else { printf("This is not a Letter\n");
    }

    return 0; 
}