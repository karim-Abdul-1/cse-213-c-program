//Write a program to print all value from 1 to n//

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)
    {
        printf("%d",i);
    }
    return 0;
}
