#include <stdio.h>


int main()
{
    int h = 0;
    int r = 0;
    int x = 0;
    int y = 0;
    int dU = 0;
    int dD = 0;

    printf("Enter radius of circle: ");
    scanf("%d",&r);

    h = 1-r;
    x = 0;
    y = r;
    while(y>x)
    {
        if(h<0)
        {
            dU = 2*(x+3);
            h = h+dU;
            x++;
        }
        else
        {
            dD = 2*(x-y)+5;
            h =h+dD;
            x++;
            y--;

        }
         printf("%d,%d\n",x,y);
        printf("%d,-%d\n",x,y);
        printf("-%d,-%d\n",x,y);
        printf("-%d,%d\n",x,y);
        printf("%d,%d\n",y,x);
        printf("%d,-%d\n",y,x);
        printf("-%d,-%d\n",y,x);
        printf("-%d,%d\n",y,x);
        printf("______________\n");

    }

    return 0;

}
