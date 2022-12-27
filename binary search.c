#include<stdio.h>
int main()
{
    int num,mid,low=0,i,n,arr[100];
    printf("enter the no of elements:");
    scanf("%d",&n);
    int up=n-1;

    for(i=0;i<n;i++)
        {
            printf("enter the element at arr[%d]",i);
            scanf("%d",&arr[i]);

    }
    printf("enter the number to be searched:");
    scanf("%d",&num);
    while(low<up)
    {
        mid=(low+up)/2;
        if(arr[mid]==num)
        {
            printf("Found the %d at %d position\n",num,mid);
            break;
        }
        else{
            if(arr[mid]>num)
            {
                up=mid;

            }
            else
            {
               low=mid+1;
            }
        }
    }
    if(low>=up)
    {
        printf("not found\n");
    }
    return 0;


}

