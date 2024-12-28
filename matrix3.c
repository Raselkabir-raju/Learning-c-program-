#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for First matrix :");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for Second matrix :");
    scanf("%d %d", &r2, &c2);

    while(c1!=r2)
    {
        printf("Error !! column of First matrix not equal to rows of Second matrix ");
           
     printf("Enter rows and column for First matrix :");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for Second matrix :");
    scanf("%d %d", &r2, &c2);
    }

    //First matrix input 

    printf("Enter elements for First matrix : \n");
    for(i=0; i<r1; i++)
    {
       
        for(j=0; j<c1; j++){
        printf("First [%d][%d]=",i,j);
        scanf("%d", &first[i][j]);
        }
    
    }

    //second matrix

     printf("Enter elements for Second matrix : \n");

     for(i=0; i<r2; i++)
    {
   
        for(j=0; j<c2; j++)
        {
            printf("Second [%d][%d]=",i,j);
             scanf("%d", &second[i][j]);
        }
        
    }

    //multiplying matrix

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];

            }

            result[i][j] = sum;
            sum=0;

        }
    }

    //printing first matrix

    printf("First matrix\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
            printf("%d ",first[i][j]);
            printf("\n");
    }
     //printing second matrix
    printf("\t");
    printf("\nSecond matrix \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",second[i][j]);
            printf("\n");
    }
        //printing result matrix
    printf("\t");
    printf("\nresult matrix \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",result[i][j]);
            printf("\n");
    }
}