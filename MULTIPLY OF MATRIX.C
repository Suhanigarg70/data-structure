#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],i,j,k,n,m;
    printf("Enter the order of n and m: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix 1: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}
