#include<stdio.h>
void printstring(char arr[]);
int main()
{   
    char lastname[5];
    scanf("%s",lastname);
    printf("your name is Abhishek %s",lastname);
    return 0;
}
void printstring(char arr[])
{   
    int i;
    for(i=0;arr[i]='\0';i++);
    {
        printf("%c",arr[i]);
    }
}