#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        // Print spaces
        for(col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        // Print numbers
        for(col = 1; col <= row; col++)
        {
            printf("%d", col);
        }

        printf("\n");
    }
}
