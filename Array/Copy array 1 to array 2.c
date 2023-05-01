// Copy array1 to array2 //

#include<stdio.h>
int main()
{
    int array1[10], array2[10], n, i;
    printf("Enter an array element : ");
    scanf("%d",&n);

    printf("\n Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("\n Array1 = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }

   /* for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }*/

    printf("\n Array2 = ");
    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
        printf("%d ",array2[i]);
    }

    return 0;


}
