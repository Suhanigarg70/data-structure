#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
};

int main()
{
  struct node *start,*temp,*s1,*s2,*r;
  start = NULL;
  s1=s2=NULL;
  int x,value;
  x=1;
  printf("insertion in the ll1\n");
  while(x==1)
  {
    printf("enter the value to be inserted\n");
    scanf("%d",&value);
    if(s1==NULL || s1->data>value)
     {
       temp = (struct node *)malloc(sizeof(struct node));
       temp->data=value;
       temp->link=s1;
       s1=temp;
     }
     else
     {
       temp = s1;
       while(temp!=NULL)
         {
           if(temp->data < value && (temp->link==NULL || temp->link->data > value))
            {
       		r = (struct node *)malloc(sizeof(struct node));
       		r->data=value;
       		r->link = temp->link;
       		temp->link = r;
     	  }
     	  temp = temp->link;
     	 }
     	 }
     printf("want more to insert?enter 1\n");
     scanf("%d",&x);
    }
    temp=s1;
    while(temp!=NULL)
    {
      printf("%d -> ",temp->data);
      temp = temp ->link;
     }
     x=1;
     printf("insertion in the ll2\n");
     temp=s2;
  while(x==1)
  {
    printf("enter the value to be inserted\n");
    scanf("%d",&value);
    if(s2==NULL || s2->data>value)
     {
       temp = (struct node *)malloc(sizeof(struct node));
       temp->data=value;
       temp->link=s2;
       s2=temp;
     }
     else
     {
       temp = s2;
       while(temp!=NULL)
         {
           if(temp->data < value && (temp->link==NULL || temp->link->data > value))
            {
       		r = (struct node *)malloc(sizeof(struct node));
       		r->data=value;
       		r->link = temp->link;
       		temp->link = r;
     	  }
     	  temp = temp->link;
     	 }
     	 }
     printf("want more to insert?enter 1\n");
     scanf("%d",&x);
    }
    temp=s2;
    printf("\n");
    while(temp!=NULL)
    {
      printf("%d -> ",temp->data);
      temp = temp ->link;
     }
     printf("\n");

     struct node *p,*q;
     p=s1;
     q=s2;

     temp = NULL;

     while(p!=NULL && q!=NULL)
     {
       r = (struct node *)malloc(sizeof(struct node));
       if(p->data < q->data )
        {
            if(start==NULL)
          {
            r->data = p->data;
            r->link = NULL;
            start=r;
            p = p->link;
     	   }
     	   else
     	   {
     	       r->data = p->data;
     	       temp = start;
     	       while(temp->link!=NULL)
     	           {
     	             temp = temp->link;
     	            }
     	        r->link = temp->link;
     	        temp->link = r;
     	        p = p->link;
     	    }
     	 }
     if(p->data > q->data )
        {
            if(start==NULL)
          {
            r->data = q->data;
            r->link = NULL;
            start=r;
            q = q->link;
     	   }
     	   else
     	   {
     	       r->data = q->data;
     	       temp = start;
     	       while(temp->link!=NULL)
     	           {
     	             temp = temp->link;
     	            }
     	        r->link = temp->link;
     	        temp->link = r;
     	        q = q->link;
     	    }
     	 }
      if(p->data == q->data )
        {
     	   if(start==NULL)
          {
            r->data = p->data;
            r->link = NULL;
            start=r;
            p = p->link;
            q = q->link;
     	   }
     	   else
     	   {
     	       r->data = p->data;
     	       temp = start;
     	       while(temp->link!=NULL)
     	           {
     	             temp = temp->link;
     	            }
     	        r->link = temp->link;
     	        temp->link = r;
     	        p = p->link;
     	        q = q->link;
     	    }
     	 }
       }
          while(p!=NULL)
          {
              if(start==NULL)
          	{
            r->data = p->data;
            r->link = NULL;
            start=r;
            p = p->link;
     	       }
     	   else
     	   {
     	       r->data = p->data;
     	       temp = start;
     	       while(temp->link!=NULL)
     	           {
     	             temp = temp->link;
     	            }
     	        r->link = temp->link;
     	        temp->link = r;
     	        p = p->link;
     	    }
          }

          while(q!=NULL)
          {
         	 if(start==NULL)
         	 {
            r->data = q->data;
            r->link = NULL;
            start=r;
            q = q->link;
     	   }
     	   else
     	   {
     	       r->data = q->data;
     	       temp = start;
     	       while(temp->link!=NULL)
     	           {
     	             temp = temp->link;
     	            }
     	        r->link = temp->link;
     	        temp->link = r;
     	        q = q->link;
     	    }

          }

    temp=start;
    printf("\n");
    while(temp!=NULL)
    {
      printf("%d -> ",temp->data);
      temp = temp ->link;
     }
     printf("\n");



     return 0;

    }
