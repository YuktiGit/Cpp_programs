#include<stdio.h>
#include<math.h>
float f1(float x,float y);
float f2(float x,float y);
int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    
    while(x<xn)
    {
        m1=f2(x0,y0);
        m2=f2((x0+h/2.0),(y0+m1*h/2.0));
        m3=f2((x0+h/2.0),(y0+m2*h/2.0));
        m4=f2((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}

float f2(float x)
{
    float c=1;
    float d=1;
    float m;
    float y;
    m= ((d*x*y)-(c*y));
    return m;
}