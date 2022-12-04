#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("new text.txt","r");
    if(fptr==NULL)
    {
        printf("file does not exist\n");
    }
    else
    {
    fclose(fptr);
    }
    return 0;
}