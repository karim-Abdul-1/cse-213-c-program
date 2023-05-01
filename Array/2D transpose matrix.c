// 2D transpose matrix //

#include<stdio.h>
int main()
{
    int A[10][10], transpose[10][10], i, j, row, col;

    printf("Enter the row and column for the matrix : ");
    scanf("%d%d",&row,&col);

    // taking value for matrix //

    printf("\nEnter the element for matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    // transpose matrix //
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j];
        }

        printf("\n");
    }

    // print value for matrix //

    printf("\n \n \n  matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // print transpose matrix //

    printf("\n \n \n Transpose matrix : \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
