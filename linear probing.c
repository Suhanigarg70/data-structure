#include<stdio.h>
#define n 11

int main()
{
 int arr[n]={0},value,index,x=1,i;

 while(x==1)
 {

  printf("enter the element to be inserted\n");
  scanf("%d",&value);

  index = value % n;

  if(arr[index]==0)
  {
    arr[index] = value;
  }
  else
  {
    if(index<n)
    {
      for(i=index+1;i<n;i++)
      {
         if(arr[i]==0)
         {
           arr[i] = value;
           break;
         }
      }
    }
    for(i=0;i<index;i++)
    {
      if(arr[i]==0)
      {
        arr[i] = value;
        break;
      }
    }


  }
  printf("want to entrer more? press 1 or leave by pressing anything except 1\n");
  scanf("%d",&x);
 }
 for(i=0;i<n;i++)
 {
   printf("arr[%d] = %d\n",i,arr[i]);
 }
 return 0;
}

