#include<stdio.h>
#include<stdlib.h>
#define N 13
#define Empty 0

typedef struct node
{
 int num;
 struct node *next;
}Node,*NodePtr;

NodePtr newNode(int n)
{
 NodePtr p = (NodePtr)malloc(sizeof(Node));
 p->num = n;
 p->next = NULL;
 return p;
}

int main()
{
  int key,search(int,NodePtr[],int);
  void printlist(NodePtr);

  FILE *in = fopen("numbers.in","r");
  NodePtr hash[N+1];

  for(int h=1;h<=N;h++)
    {
      hash[h] = NULL;
    }
  int distinct = 0;

  while(fscanf(in,"%d",&key)==1)
  {
    if(!search(key,hash,N))
    {
      distinct++;
    }
  }

 printf("\n there are %d distinct numbers \n\n",distinct);

 for(int h=1;h<=N;h++)
 {
  if(hash[h]!=NULL)
  {
    printf("hash[%d]: ",h);
    printlist(hash[h]);
  }

 }
 fclose(in);

  return 0;
}

int search(int inkey,NodePtr hash[],int n)
{
  NodePtr newNode(int);
  int k = inkey%n+1;
  NodePtr curr = hash[k];
  NodePtr prev = NULL;
  while(curr!=NULL && inkey > curr -> num)
  {
   prev = curr;
   curr = curr->next;
  }
   if(curr!=NULL && inkey == curr->num)
    return 1;
  NodePtr np = newNode(inkey);
  np->next = curr;
  if(prev == NULL)
  {
   hash[k] = np;
  }
  else{
    prev->next = np;
  }
 return 0;
}


void printlist(NodePtr top)
{
 while(top!=NULL)
 {
  printf("%2d ",top->num);
  top = top->next;
 }

 printf("\n");
}







