#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double m1,m2,Ax,Ay,Bx,By,b1,b2;
	double x1,x2,x3,y1,y2,y3;
	double xx,yy,radius;

	printf("enter x1 :");
    scanf("%lf",&x1);
    printf("enter y1 :");
    scanf("%lf",&y1);

    printf("enter x2 :");
    scanf("%lf",&x2);
    printf("enter y2 :");
    scanf("%lf",&y2);

    printf("enter x3 :");
    scanf("%lf",&x3);
    printf("enter y3 :");
    scanf("%lf",&y3);


		m1 = (y2-y1) / (x2-x1);
		m2 = (y3-y2) / (x3-x2);
		Ax = (x1+x2)/2;
		Ay = (y1+y2)/2;
		Bx = (x3+x2)/2;
		By = (y3+y2)/2;

		xx = (x2*x2 *y1 - x3*x3 *y1 - x1*x1 *y2 + x3*x3 *y2 - y1*y1 *y2 + y1 *y2*y2 +
	            x1*x1 *y3 - x2*x2 *y3 + y1*y1 *y3 - y2*y2 *y3 - y1 *y3*y3 +
	            y2* y3*y3)/(2 *(x2 *y1 - x3* y1 - x1 *y2 + x3 *y2 + x1* y3 - x2 *y3));

	    yy = (x1*x1 *x2 - x1 *x2*x2 - x1*x1 *x3 + x2*x2* x3 + x1* x3*x3 - x2 *x3*x3 +
	            x2* y1*y1 - x3* y1*y1 - x1* y2*y2 + x3* y2*y2 + x1 *y3*y3 -
	            x2 *y3*y3)/(2* (x2* y1 - x3* y1 - x1* y2 + x3* y2 + x1* y3 - x2 *y3));

	    radius = (fabs(xx - x1)*fabs(xx - x1))+(fabs(yy - y1)*fabs(xx - x1));
	    printf("xx is %lf \n" ,xx);
	    printf("yy is %lf \n" ,yy);
        printf("\n radius is square root  %lf " ,radius);
        printf("\n radius = %lf " ,sqrt(radius));
	}

