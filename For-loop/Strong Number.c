#include<stdio.h>
int main()
{
    int num, sum=0, temp, r, i, fact;
    printf("Enter any number :");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp%10;

        fact = 1;
        for(i=1; i<=r; i++)
        {
            fact = fact*i;
        }

        sum = sum+fact;
        temp =temp/10;
    }
    if(num==sum)
    {
        printf("Strong number \n");
    }
    else
        printf("Not Strong number \n");

}
