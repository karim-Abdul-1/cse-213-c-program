// Write a c program to counting number of digit in an integer //

#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter any number :");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        ++count;
    }
    printf("Total Number of Digit : %d \n",count);

    return 0;
}



