#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("SONU","r");
    printf("%c\n",fgetc(fptr));
    fclose(fptr);
    return 0;
}