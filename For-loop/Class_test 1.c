#include<stdio.h>
int main()

{
    int i,x;
    scanf("%d",&x);

    for(i=2; i<=x; i=i+2)
    {
        printf("%d",i);
    }
    return 0;
}
