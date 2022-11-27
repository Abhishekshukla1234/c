#include<stdio.h>
void printstring(char arr[]);
int countlength(char arr[]);
int main()
{
    char name[50];
    fgets(name,50,stdin);
    printf("length is :%d",countlength(name));
    return 0;
} 
int countlength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}
void printdstring(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}