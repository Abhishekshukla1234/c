#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);
int main()
{
    char oldstr[50]="abhishek";
    char newstr[50]="atharv";
    strcpy(newstr,oldstr);
    puts(newstr);
int countlength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]='\0';i++)
    {
        count++;
    }
    return count-1;
}
void printstring(char arr[])
{
    for(int i=0;arr[i]='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
}