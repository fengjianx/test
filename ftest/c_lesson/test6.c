#include<stdio.h>
#define PI 3.14159
#define area(r) PI*r*r
main()
{
printf("please input the circle radius=\n");
float r,a;
scanf("%f",&r);
a=area(r);
printf("The area of circle is %f",a);
}
