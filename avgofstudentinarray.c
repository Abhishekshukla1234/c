#include<stdio.h>
void printavg(int sum,int avg,int marks[]);
int main()
{
    int avg,sum=0;
    int i;
    int marks[30];
    printf("enter the marks");
    scanf("%d",&marks[i]);
    printavg(sum,avg,marks);
    return 0;
}
    void printavg(int sum,int avg,int marks[])
    {
   for(int i=0;i<=29;i++)
   sum=sum+marks[i];
   avg=sum/30;
   printf("average marks=%d\n",avg);
   return 0;
 }