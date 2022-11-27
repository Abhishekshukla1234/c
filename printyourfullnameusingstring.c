#include<stdio.h>
void printsting(char arr[]);
int main()
{
    char fullname[25];
    scanf("%s",fullname);
    printf("your full name is %s",fullname);
    gets(fullname);
    puts(fullname);
    return 0;
}
void printstring(char arr[])
{
    for(int i=0;arr[i]='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}