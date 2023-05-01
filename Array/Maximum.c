// Write a c program that can take some number and display maximum //

#include<stdio.h>
int main()
{
    int n, a[10], i, max;
    printf("Enter an array element : ");
    scanf("%d",&n);

    printf("\n Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n The values are : ");
    for(i=0; i<n; i++)
    {
        printf("\n a[%d] : %d \n",i,a[i]);
    }

    max = a[0];
    for(i=1; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("\n Maximum = %d \n ",max);

    return 0;
}
