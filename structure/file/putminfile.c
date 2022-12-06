#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("SONU","w");
    fputc('m',fptr);
    fclose(fptr);
    return 0;
}