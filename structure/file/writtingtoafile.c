#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("text.txt","w");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fclose(fptr);
    return 0;
}