#include<stdio.h>
#define rows 3
#define cols 3
int main()
{
 int a[rows][cols]={10,20,40,30,60,70,80,100,90},i,j,temp;
 int b[rows][cols] = {1,2,3,4,5,6,7,8,9};
 int c[rows][cols];

 for(i=0;i<rows;i++)
 {
   for(j=0;j<cols;j++)
   {
     printf("a[%d][%d] = %d\t",i,j,a[i][j]);
   }
   printf("\n");
 }
temp = 0;
 for(i=0;i<rows;i++)
 {
   for(j=0;j<cols;j++)
   {
     temp = a[i][j];
     a[i][j] = a[j][i];
     a[i][j] = temp;

   }
 }

 printf("\nafter transpose operatikon\n");

 for(i=0;i<rows;i++)
 {
   for(j=i;j<cols;j++)
   {
     printf("a[%d][%d] = %d\t",i,j,a[i][j]);
   }
   printf("\n");
 }


 return 0;
}

