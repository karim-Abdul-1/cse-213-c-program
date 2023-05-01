
// Question - 2: Write a c program to find the prime numbers between two intervals

// Sample input : Enter two numbers(intervals): 20, 50

// sample Output :
// Prime numbers between 20 and 50 are : 23, 29, 31, 37,41, 43,47.

#include<stdio.h>
int main()
{
    int a=20, b=50, i, count=0;


    for(a; a<=b; a++)
    {
        count=0;

        for(i=2; i<a; i++)
        {

            if(a%2==0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
        {
            printf("\n %d \n",a);
        }
    }

    return 0;
}
