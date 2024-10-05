#include <stdio.h>
#include <math.h>

void distance(float a,float b, float c,float d,float dis)
{
   dis = sqrt((((a-c)*(a-c))+((b-d)*(b-d))));
   printf("The distance between (%f,%f) and (%f,%f) is %f\n",a,b,c,d,dis);
}
int main()
{
    float X1,X2,X3,Y1,Y2,Y3,dis1,dis2,dis3;
    printf("Enter the coordinates (X1,Y1) of point one\n");
    scanf("%f %f",&X1,&Y1);
    printf("Enter the coordinates (X2,Y2) of point two\n");
    scanf("%f %f",&X2,&Y2);
    printf("Enter the coordinates (X3,Y3) of point three\n");
    scanf("%f %f",&X3,&Y3);
    distance(X1,Y1,X2,Y2,dis1);
    distance(X1,Y1,X3,Y3,dis2);
    distance(X2,Y2,X3,Y3,dis3);
    return 0;
}
