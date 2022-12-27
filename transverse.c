#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,rows,cols,temp;
    printf("enter no of rows");
    scanf("%d",&rows);
    printf("enter no of columns");
    scanf("%d",&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            {
               scanf("%d",&a[i][j]);
            }
    }


    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            {
               printf("a[%d][%d]=%d\n",i,j,a[i][j]);
            }
    }
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            {

               a[i][j]=a[j][i];

            }
    }
    printf("after traversal\n");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            {
               printf("a[%d][%d]=%d\n",i,j,a[i][j]);
            }
    }
    return 0;
}
