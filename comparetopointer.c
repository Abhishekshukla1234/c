#include<stdio.h>
int main()
{
    int age=22;
    int age1=23;
    int*ptr=&age;
    int*ptr1=&age1;
    printf("%u,%udiffrance=%u\n",ptr,ptr1,ptr-ptr1);
    printf("comparison=%u\n",ptr==ptr1);
    return 0;

}