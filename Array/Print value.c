// Write a c program to print Array value

#include<stdio.h>
int main()
{
    int n, a[10],i;
    printf("please Enter an array element : ");
    scanf("%d",&n);

    printf("\n Please Enter the value : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n The values are : ");
    for(i=0; i<n; i++)
    {
        printf("\n %d",a[i]);
    }

    return 0;
}
