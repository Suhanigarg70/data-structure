#include<stdio.h>
int main(void)
{

  int arr[10]={10,20,30,40,50,60,70,80,90,100};
  int ad,i;

  for(i=0;i<10;i++)
  {
    printf("address of arr[%d] =  %u\n",i,&arr[i]);
  }


printf("base address of arr = %u\n",(&arr[0] ));
int p=&arr;
printf("address of arr[8] = %u\n",p);
printf("%d",sizeof(int));



}

