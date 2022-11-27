#include<stdio.h>
void printstring(char arr[]);
int main()
{
    char str[50];
    fgets(str,100,stdin);
    puts(str);
    return 0;
}
void printdstring(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}