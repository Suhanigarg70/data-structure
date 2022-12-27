#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the no.of elements in set a:");
    scanf("%d",&m);
    printf("enter the no.of elements in set b:");
    scanf("%d",&n);
    int a[m],b[n];
    printf("enter the elements of set a:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of set b:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("{ ");
     for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("(%d %d) ",a[i],b[j]);
            }
        }
            printf("}");
    return 0;

}

