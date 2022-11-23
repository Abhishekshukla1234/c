#include<stdio.h>
int main()
{
    int i,n,aadhar[0];
    printf("enter the value:");
    scanf("%d",&n);
    int*ptr=&n;
    aadhar[0]=&ptr;
    for(i=0;i<=10;i++)
    {
     printf("%d,index :",i);
        scanf("%d",ptr++);
    }
}