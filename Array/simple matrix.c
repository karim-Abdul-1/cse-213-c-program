// Simple matrix //
#include<stdio.h>
int main()
{
    int a[3][4], b[3][4], i, j;

    printf("Enter the values of A matrix : \n");
    // Scaning A matrix //
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // Print a matrix //
    printf("\n A : ");
    for(i=0; i<3; i++)
    {
        printf("\t");

        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // scaning B matrix //
    printf("Enter the values of B matrix : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    // printing B matrix //
    printf("\n B : ");
    for(i=0; i<3; i++)
    {
        printf("\t");

        for(j=0; j<4; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
