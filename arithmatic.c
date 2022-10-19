#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,sum,sub,mul,div;

    printf("enter the fisrt number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    printf("sum is %d\n",sum);
    sub=b-a;
    printf("sub is %d\n",sub);
    mul=b*a;
    printf("mul is %d\n",mul);
    div=a/b;
    printf("div is %d\n",div);
    getch();
}