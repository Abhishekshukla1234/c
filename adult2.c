#include<stdio.h>
int main ()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18)
    { 
        printf("adult\n");

    }
    else if(age>12,age<18){
        printf("trigger\n");

    }
    else
    { 
        printf("child\n");
    } 
    return 0;
}