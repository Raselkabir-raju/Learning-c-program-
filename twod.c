#include<stdio.h>
int main()
{
    int i,j,numbersofRows, numbersofCols;
    int A[10][10],B[10][10],C[10][10];

    printf("How many numbers of rows and cols :");
    scanf("%d %d", &numbersofRows, &numbersofCols);

    //scanning A matrix

    printf("Enter elements for A matrix. \n ");

    for(i=0; i<numbersofRows; i++)
    {
        for(j=0; j<numbersofCols; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    //printing A matrix

    printf("A = ");
    for(i=0; i<numbersofRows; i++)
    {
        printf("\t");
        for(j=0; j<numbersofCols; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
     //scanning B matrix

    printf("\nEnter elements for B matrix. \n ");

    for(i=0; i<numbersofRows; i++)
    {
        for(j=0; j<numbersofCols; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    //printing B matrix

    printf("B = ");
    for(i=0; i<numbersofRows; i++)
    {
        printf("\t");
        for(j=0; j<numbersofCols; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

//adding the matrix
    for(i=0; i<numbersofRows; i++)
    {
     
        for(j=0; j<numbersofCols; j++)
        {
            C[i][j] = A[i][j]+B[i][j];
        }

    }
      //printing C matrix

    printf("\nA+B = ");
    for(i=0; i<numbersofRows; i++)
    {
        printf("\t");
        for(j=0; j<numbersofCols; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

}