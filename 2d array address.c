#include<stdio.h>
int main()
{
    int arr[100][100],i,j,a,b;
    printf("enter no of rows");
    scanf("%d",&a);
    printf("enter no of columns");
    scanf("%d",&b);

    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("address of a[%d][%d]=%u\n",i,j,&arr[i][j]);
        }
    }
    return 0;



}
