// Write a c program that can take some number and display minimum //

#include<stdio.h>
int main()
{
    int n, a[10], i, mini;
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

    mini = a[0];
    for(i=1; i<n; i++)
    {
        if(mini > a[i])
        {
            mini = a[i];
        }
    }
    printf("\n Minimum = %d \n ",mini);

    return 0;
}
