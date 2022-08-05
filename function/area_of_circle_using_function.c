#include<stdio.h>

float circle(float r)
{
    float pi=3.1416;
    float area=pi*(r*r);
    return area;
}
int main()
{
    float ar,redi;
    scanf("%f",&redi);
    ar=circle(redi);
    printf("%f",ar);

    return 0;
}
