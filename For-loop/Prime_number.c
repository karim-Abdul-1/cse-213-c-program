//Write a c program to print prime number for 1 to n//

#include<stdio.h>
int main()

{
    int num,count=0,i;
    printf("Enter any positive number : ");
    scanf("%d",&num);

    for(i=2; i<num; i=i+1)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("It is prime number");
    }
    else
        printf("It is not prime number");

    return 0;
}
