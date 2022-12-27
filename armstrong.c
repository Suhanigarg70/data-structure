#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("enter range");
    scanf("%d %d",&x,&y);
    armstrong(x,y);
}

void armstrong(int m,int n)
{
    int i, j,c,p,r,sum;
    for(i=m;i<=n;i++)
    {
        c=0;
        p=i;
        sum=0;
        while(p>0)
        {
            c++;
            p=p/10;
        }
        p=i;
        while(p>0)
        {
            r=p%10;
            sum=sum+pow(r,c);
            p=p/10;

        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
}
