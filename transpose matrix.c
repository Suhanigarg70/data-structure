#include<stdio.h>

int main()
{
 int a[3][3] = {10,20,30,40,50,60,70,80,90};
 int i,j;
 int temp;

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("a[%d][%d] = %d\t",i,j,a[i][j]);

  }
  printf("\n");

 }

 printf("\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<i;j++)
  {
   temp = a[i][j];
   a[i][j] = a[j][i];
   a[j][i] = temp;

  }
}


for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("a[%d][%d] = %d\t",i,j,a[i][j]);

  }
  printf("\n");

 }

 return 0;
}
