// Two matrix Addition //

#include<stdio.h>
int main()
{
    int a[10][10], b[10][10],c[10][10], i, j;
    int numberOfRow, numberOfColumn;

    printf("Enter the number of Row and Columns : ");
    scanf("%d %d",&numberOfRow,&numberOfColumn);

    // Scaning A matrix //
    printf("Enter the values of A matrix : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // scaning B matrix //
    printf("Enter the values of B matrix : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    // Print a matrix //
    printf("\n A : ");
    for(i=0; i<numberOfRow; i++)
    {
        printf("\t");

        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // printing B matrix //

    printf("\n B : ");
    for(i=0; i<numberOfRow; i++)
    {
        printf("\t");

        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    // Summation //

    for(i=0; i<numberOfRow; i++)
    {

        for(j=0; j<numberOfColumn; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // printing (A+B) summation //

    printf("\n A + B : ");
    for(i=0; i<numberOfRow; i++)
    {

        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}

