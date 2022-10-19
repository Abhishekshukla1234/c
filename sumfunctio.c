#include<stdio.h>
int sum(int a,int b);
int main ()
{
    int a,b,s;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("entre the second number:");
    scanf("%d",&b);
    s=sum(a,b);
    printf("%d",s);
    return 0;
}
    int sum(int a,int b){
    return a+b;
    
    }