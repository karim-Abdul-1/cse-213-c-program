// Sum of Diagonal //

#include<stdio.h>
int main()
{
    int A[10][10], i, j, sum=0, row, col;

    printf("Enter the row and column for the matrix : ");
    scanf("%d%d",&row,&col);

    // taking input//
    printf("\n Enter the element : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    // print the value//

    printf("\n Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // sum of Diagonal //

    printf("\n Diagonal element :");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
     printf("\nSum of Diagonal : %d \n",sum);

    return 0;
}
