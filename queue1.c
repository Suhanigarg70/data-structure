
#include<stdio.h>
#include<stdlib.h>

void Enque(int [],int,int *,int *,int);
int Dequeue(int [],int ,int *,int *);
void display(int [],int,int);

int main()
{
  int N,x;
  printf("enter the capacity of queue: ");
  scanf("%d",&N);
  int Q[N],front=-1,rear=-1;

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  Enque(Q,N,&front,&rear,x);

  display(Q,front,rear);

  x = Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  display(Q,front,rear);

  return 0;
 }
  void Enque(int Q[],int N,int *f,int *r,int x)
  {
    if((*r)+1==N)
    {
       printf("Queue overflow\n");
       exit(1);
     }
    else
     {
    	if((*f)==-1)
    	{
      		(*f)++;
      		(*r)++;
      		Q[*r]=x;
    	}
    	else
    	{
    	  (*r)++;
    	  Q[*r]=x;
    	  }
    	 }
    	}

  int Dequeue(int Q[],int N,int *f,int *r)
  {
    int y;
    if((*f)==-1)
    {
      printf("Queue underflow\n");
      exit(1);
     }
    else
    {
      if((*f)==(*r))
      {
        y=Q[*f];
        (*f)=-1;
        (*r)=-1;
        return y;
       }
      else
       {
         y=Q[*f];
         (*f)++;
         return y;
        }
       }
     }

 void display(int Q[],int f,int r)
 {
   if(f==-1)
    {
      printf("Queue is empty\n");
    }
    else
    {
      while(f!=r)
      {
        printf("%d -> ",Q[f]);
        f++;
      }
     }
     if(f==r)
     {
       printf("%d\n",Q[f]);
     }
  }

