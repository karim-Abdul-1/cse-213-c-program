//// Armstrong Number //

#include<stdio.h>
int main()
{
    int num, temp, sum=0, r;
    printf("Enter a number : ");
    scanf("%d",&num);

    temp = num;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum +r*r*r;
        temp = temp/10;
    }

    if(num==sum)
    {
        printf("Armstrong Number \n");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}
