// Write a c program to read and print element of an array //

#include<stdio.h>
int main()
{
    int n, a[20], i;
    printf("Please enter an array element : ");
    scanf("%d",&n);

    printf("\n Please Enter the value : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n The values are : ");
    for(i=0; i<n; i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }

    return 0;
}
