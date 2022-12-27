#include<stdio.h>

int main()
{
    int x=10,*p;
    printf("value of x is:%d",x);
    p=&x;
    printf("value of p is:%d",p);
    int **q;
    q=&p;
    return 0;
}
