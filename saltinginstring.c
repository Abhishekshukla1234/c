#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);
void salting(char password[]);
int main()
{
    char password[50];
    scanf("%s",password);
    salting(password);
}
void salting(char password[])
{
    char salt="123";
    char newpass[100];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
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