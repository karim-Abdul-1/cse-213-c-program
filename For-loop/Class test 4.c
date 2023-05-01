

#include<stdio.h>
int main()

{
    int i=5;
    scanf("%d",&i);

    for( ; i--; )
    {
        printf("%d",i);
    }
    return 0;
}
