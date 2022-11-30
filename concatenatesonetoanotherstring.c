#include<stdio.h>
#include<string.h>
void printstring( char arr[]);
int countlength(char arr[]);
int main()
{
    char firststr[50]="abhishek";
    char secstr[50]="shukla";
    strcat(firststr,secstr);
    puts(firststr);
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
void printstring(char arr[])
{
    for(int i=0;arr[i]='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}