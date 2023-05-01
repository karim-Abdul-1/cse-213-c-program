
// write a c program show that reverse number

#include<stdio.h>
int main()
{
    int n, a[20], i;

    printf("Please Enter an array element : ");
    scanf("%d",&n);

    printf("\n Please Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n The values are : \n");
    for(i=0; i<n; i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }

    for(i=n; i>=0; i--)
    {
        printf("\n Reverse number : %d",a[i]);
    }

    return 0;
}
