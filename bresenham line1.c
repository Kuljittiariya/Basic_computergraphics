#include<stdio.h>
#include<math.h>
void plot(int Case,int x,int y)
{
    if(Case == 1)
        printf("(%d,%d)\n",x,y);
    else if(Case == 2)
        printf("(%d,%d)\n",y,x);
    else if(Case == 3)
        printf("(%d,%d)\n",x,-y);
    else if(Case == 4)
        printf("(%d,%d)\n",y,-x);
}
void OriginalBresenham(int Case,int x1,int y1,int x2,int y2)
{
    int m,x,y,dx,dy,d,dD,du;
    dx=x2-x1;
    dy=y2-y1;
    d=2*dy-dx;
    dD=2*dy;
    du=2*(dy-dx);
    x=x1;
    y=y1;
    plot(Case,x,y);
    while(x<x2)
    {
        if(d<0)
        {
            d=d+dD;
            x++;
        }
        else
        {
            d=d+du;
            x++;
            y++;
        }
        plot(Case,x,y);
    }
}
int main()
{
    int x1,y1,x2,y2,dx,dy;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1>x2)
    {
        dx=x1;
        x1=x2;
        x2=dx;
        dy=y1;
        y1=y2;
        y2=dy;
    }
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>abs(dy))
        if(dy>0)
            OriginalBresenham(1,x1,y1,x2,y2);
        else
            OriginalBresenham(3,x1,-y1,x2,-y2);
    else
        if(dy>0)
            OriginalBresenham(2,y1,x1,y2,x2);
        else
            OriginalBresenham(4,-y1,x1,-y2,x2);
    return 0;
}
