//Write a program to print even number all value from 1 to n//

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d",i);
    }
    return 0;
}

