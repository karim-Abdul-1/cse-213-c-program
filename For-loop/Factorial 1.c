// Factorial solve:

#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter any Positive Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
