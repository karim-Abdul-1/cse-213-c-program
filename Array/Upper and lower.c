// upper and lower from diagonal //

#include<stdio.h>
int main()
{
    int A[10][10], row, col, i, j, upperSum=0, lowerSum=0;

    printf("Enter the row and column for the matrix : ");
    scanf("%d%d",&row,&col);

    // taking value for the matrix //
    printf("\n Enter the element for the matrix : \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // print the value //

    printf("\n matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // upper and lower print //

  //  printf("\n Upper and Lower sum : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           if(i<j)
           {
               upperSum = upperSum + A[i][j];
           }

           if(i>j)
           {
               lowerSum = lowerSum + A[i][j];
           }

        }

    }

    printf("\n The sum of upper Triangle is  = %d",upperSum);
    printf("\n The sum of Lower Triangle is  = %d",lowerSum);

    return 0;
}


