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
    
    do
    {
        m1=f1(x0,y0);
        m2=f1((x0+h/2.0),(y0+m1*h/2.0));
        m3=f1((x0+h/2.0),(y0+m2*h/2.0));
        m4=f1((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
    while(x<xn);

    printf("\n\nX\t\tY\n");
    
    x=x0;
    y=y0;
    do
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
    while(x<xn);
}
float f1(float x,float y)
{
    float a=0.66;
    float b=1.33;
    float m;
    m= (a*x)-(b*(x*y));
    return m;
}
float f2(float x, float y)
{
    float c=1;
    float d=1;
    float m;
    m= ((d*x*y)-(c*y));
    return m;
}