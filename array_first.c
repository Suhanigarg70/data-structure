#include<stdio.h>
struct points
    {
        int x;
        int y;
    };
void initializer(struct points []);
void display(struct points []);
int main()
{
    struct points p[3];
    initializer(p);
    display(p);
    return 0;
}
void initializer(struct points p[])
{
    for(int i=0;i<3;i++)
    {
        scanf("%d%d",&p[i].x,&p[i].y);
    }
}
void display(struct points p[])
{
    for(int i=0;i<3;i++)
        printf("x=%d  y=%d\n",p[i].x,p[i].y);+
}


