#include<stdio.h>
int main()
{
    int i,j,arr[100],num,n,d=0;
    printf(" enter the no of elements:");
    scanf("%d",&n);
    num=27;
    for(i=0;i<n;i++)
    {
        printf("enter the arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
            {
            printf("% is found at %d position:\n",num,i);
            d++;
            break;
            }

    }
    if(d==0)
        {
            printf("Not found");
        }

    return 0;




}

