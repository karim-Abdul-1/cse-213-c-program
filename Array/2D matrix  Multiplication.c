// 2D matrix multiplication //

#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10];
    int i, j, k, r1, r2, c1, c2, sum=0;

    printf("Enter row and column for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter row and column for second matrix : ");
    scanf("%d%d",&r2,&c2);

    while( c1 != r2 )
    {
        printf("\n \n Error !! First matrix number of column and second matrix number of row are not same : ");
        printf("\n Again correct enter the row and column : ");

        printf("\n \n \n Enter row and column for first matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("\n Enter row and column for second matrix : ");
        scanf("%d%d",&r2,&c2);
    }

    // taking input for first matrix  //

    printf("\n \n \n Enter  first matrix element : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] : ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");

    }

    // taking input for second matrix  //

    printf("\n Enter second  matrix element : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] : ",i,j);
            scanf("%d",&second[i][j]);
        }

        printf("\n");

    }

    // multiplying matrix //
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }

            result[i][j] = sum;
            sum = 0;
        }
    }

    // print value for first matrix  //

    printf("\n \n \n First matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    // print value for second  matrix  //

    printf("\n \n \n Second matrix : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");

    }

    // print value for result matrix  //

    printf("\n \n \n Result matrix : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");

    }
    return 0;

}

