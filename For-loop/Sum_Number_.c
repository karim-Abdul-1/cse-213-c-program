//Write a program to print the sum of all even number from 1 to n//

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d",i);

        sum=sum+i;

    }
    printf("\nSum = %d",sum);


    return 0;
}

