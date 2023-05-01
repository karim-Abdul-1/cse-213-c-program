//Break & Continue Statemant//
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<15; i=i+1)
    {
        if(i%2==0)
            continue;
        printf("%d\n",i);
        if(i==9)
            break;
    }
}
