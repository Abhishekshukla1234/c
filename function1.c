#include<stdio.h>
void printnamste();
void printbanjour();
int main ()
{
    char ch,i;
    printf("enter f for french & i for indian:");
    scanf("%c",&ch);
    if (ch=='i')
    {
      printf("namste");
    }
    else
    {
        printf("banjour");
    }
    return 0;
}
void printnamste()
{
    printf("namste\n");
}
void printbanjour()
{
    printf("banjour");
}