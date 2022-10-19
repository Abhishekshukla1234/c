#include<stdio.h>
int main()
{
    int age ;
    printf("enter a number:");
    scanf("%d",&age);
    age>=18?printf("adult\n"):printf("not adult\n");
    getch();
}