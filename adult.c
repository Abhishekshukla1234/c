#include<stdio.h>
int main()
{
    int age;
    printf("entr age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are adult\n");
    printf("you can drive\n");
    printf("you can vote\n");
    }
    else
    {
        printf("you are not adult\n");
        printf("you can not drive\n");
        printf("you can not vote\n");
    }
    return 0;

}