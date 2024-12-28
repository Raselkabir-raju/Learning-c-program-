#include<stdio.h>
int main()
{
    int A[3][3],i,j,row,col,uppersum=0,lowersum=0;

    //getting the elements for the matrix

    printf("\nEnter the elements for the matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //sum of upper and lower triangle elements

 
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                uppersum = uppersum + A[i][j];
            
            }

            if(i>j)
            lowersum = lowersum + A[i][j];
        }
    }
       printf("\nSum of upper triangle elements =%d\n",uppersum);
          printf("\nSum of lower triangle elements =%d\n",lowersum);
}