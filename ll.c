#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
 };

 void insert(struct node **, int);
 int main(){
     struct node *start;
     start= NULL;
     int x=1, value;
     printf("insertion at the last in the ll using recursion\n");

     for(int i=0;i<4;i++)
     {
         printf("enter the value to be inserted\n");
         scanf("%d",&value);
         insert(&start,value);


     }
     struct node *temp;
     temp=start;

     while(temp!=NULL)
     {
         printf("%d--> ",temp->data);
         temp = temp->link;

     }
     int count_ll = count(start);
     return 0;

 }

 void insert(struct node **q, int data)
 {
     if((*q)==NULL)
     {
         struct node *r;
         r = (struct node*)malloc(sizeof(struct node));
         r->data = data;
         (*q) = r;
         (*q)->link =NULL;
     }
     else{
        insert(&((*q)->link),data);

     }
 }

 int count(struct node *q)
 {
     if(q==NULL)
     {
         return 0;
     }
     else{
        return 1+count(q->link);
     }
 }
