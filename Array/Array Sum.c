// Write a c program to read and print an array element and sum and average  //

#include<stdio.h>
int main()
{
    int n, a[20], i, sum=0;
    printf("Please enter an array element :");
    scanf("%d",&n);

    printf("\n Please enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n The values are : ");
    for(i=0; i<n; i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }

    printf("\n The summation is : ");
    for(i=0; i<n; i++)
    {
        sum = sum+a[i];
    }
    printf("\n \n Sum = %d",sum);
    printf("\n \n Average = %.2f \n",(float)sum/n);

    return 0;
}
