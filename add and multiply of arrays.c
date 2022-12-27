#include<stdio.h>
int main()
{
    int a[20],b[10],n,i,c[10],d[10];
    printf("enter the no of elements in arrays:");
    scanf("%d",&n);
    printf("first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("second array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);

    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        d[i]=a[i]*b[i];

    }
    printf("Added Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);


    }
    printf("Multiplied Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",d[i]);

    }
    return 0;
}

