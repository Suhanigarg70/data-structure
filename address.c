#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("enter the no of elements in array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         printf("address of a[%d] = %u\n",i,&arr[i]);
     }
     return 0;

}
