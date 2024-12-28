#include<stdio.h>
int main()
{
    int A[10][10], transpose[10][10], i, j, row, col;

    printf("Enter number of Rows and Columns for the matrix: ");
    scanf("%d %d", &row, &col);

    // Taking input for the matrix A
    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Calculating transpose

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    // Printing the entered matrix

    printf("\nEntered Matrix:\n");
     printf("\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Printing the transpose matrix

    printf("\nTranspose Matrix:\n\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


}
