#include<stdio.h>
#include<conio.h>
struct address{
    int houseno;
    char block[10];
    char city[10];
    char state[10];
};
void printadd(struct address adds);
int main()
{
    {
    struct address adds[5];
 printf("enter the info for person1:");
    scanf("%d",&adds[0].houseno);
    scanf("%s",&adds[0].block);
    scanf("%s",&adds[0].city);
    scanf("%s",&adds[0].state);
}
{
  struct address adds[5];
    printf("enter the info for person2:");
    scanf("%d",&adds[1].houseno);
    scanf("%s",&adds[1].block);
    scanf("%s",&adds[1].city);
    scanf("%s",&adds[1].state);
}
}
    
