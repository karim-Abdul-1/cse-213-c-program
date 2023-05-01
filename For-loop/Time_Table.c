/* Time table:
Enter any number:
    ixnum=num*i
    1X2=2
    2x2=4      eikhane while dici karon jeno code ta bar bar colte thake
    3x2=6         This is new technique
    .......
    10x2=20 */
#include<stdio.h>
int main()
{
    while(1)
        {
    int num,i;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(i=1; i<=10; i=i+1)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    }
    return 0;
}
