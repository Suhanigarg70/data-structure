
#include<stdio.h>
#include<stdlib.h>

void R_Enque(int [],int,int *,int *,int);
int F_Dequeue(int [],int ,int *,int *);
void F_Enque(int [],int,int *,int *,int);
int R_Dequeue(int [],int ,int *,int *);
void display(int [],int,int,int);

int main()
{
  int N,x;
  printf("enter the capacity of Circular queue: ");
  scanf("%d",&N);
  int Q[N],front=-1,rear=-1;

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  R_Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  R_Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  R_Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  R_Enque(Q,N,&front,&rear,x);

  display(Q,front,rear,N);

  x = F_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = F_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = F_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  display(Q,front,rear,N);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  F_Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  F_Enque(Q,N,&front,&rear,x);

  printf("enter the value to be enqueued\n");
  scanf("%d",&x);
  F_Enque(Q,N,&front,&rear,x);

  display(Q,front,rear,N);

  x = R_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = R_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  x = F_Dequeue(Q,N,&front,&rear);
  printf("Value deleted is %d\n",x);

  display(Q,front,rear,N);


  return 0;
 }
  void R_Enque(int Q[],int N,int *f,int *r,int x)
  {
    if(((*r)+1)%N==(*f))
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
    	  (*r) = ((*r)+1)%N;
    	  Q[*r]=x;
    	  }
    	 }
    	}

  int F_Dequeue(int Q[],int N,int *f,int *r)
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
         (*f) = ((*f)+1)%N;
         return y;
        }
       }
     }

   void F_Enque(int Q[],int N,int *f,int *r,int x)
  {
    if(((*r)+1)%N==(*f))
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
    	if((*f)==0)
    	{
    	   (*f) = N-1;
    	   Q[*f]=x;
    	 }
    	 else
    	 {
    	   (*f) = (*f)-1;
    	   Q[*f] = x;
    	 }
    	}
    	}

  int R_Dequeue(int Q[],int N,int *f,int *r)
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
       if((*r)==0)
        {
           y = Q[*r];
           (*r) = N-1;
           return y;
        }
        else
         {
            y=Q[*r];
            (*r)--;
            return y;
         }
       }
     }


 void display(int Q[],int f,int r,int N)
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
        f = (f+1)%N;
      }
     }
     if(f==r)
     {
       printf("%d\n",Q[f]);
     }
  }
