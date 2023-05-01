// Write a c program that read any positive integer and display sum of digit //

#include<stdio.h>
int main()
{
    int num, temp, sum=0, r;
    printf("Enter any number :");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp%10;
        sum = sum+r;
        temp = temp/10;
    }
    printf("Sum of Digit is : %d \n",sum);

    return 0;
}
