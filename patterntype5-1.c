#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N = ");
    scanf("%d", &n);

    for(row = n; row >= 1; row--)
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
