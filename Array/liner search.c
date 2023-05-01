// Liner search //

#include<stdio.h>
int main()
{
    int a[10], n, i, search;
    printf("Enter an array element : ");
    scanf("%d",&n);

    printf("\n Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Enter the search value : ");
    scanf("%d",&search);

    for(i=0; i<n; i++)
    {
        if(a[i] == search)
        {
            printf("\n %d is present at position %d",search,i+1);
            break;
        }
    }

    if(i==n)
    {
        printf("\n %d is not present in the array ",search);
    }

    return 0;
}


