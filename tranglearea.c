#include<stdio.h>
int main()
{
    float a,b,h;
    //a is area //b is base //h is height
    printf("enter the value of base:");
    scanf("%f",&b);
    printf("enter the value of hieght:");
    scanf("%f",&h);
    a=(b*h)/2;
    printf("area is %f",a);
    getch();

}