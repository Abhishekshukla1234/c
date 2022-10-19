#include<stdio.h>
int main ()
{
    int day;
    printf("enter the day(1-7):");
    scanf("%d",&day);
    switch(day){
        case1:printf("Monday\n");
        break;
        case2:printf("Tuesday\n");
        break;
        case3:printf("Wednesday\n");
        break;
        case4:printf("thursday\n");
        break;
        case5:printf("friday\n");
        break;
        case6:printf("satureday\n");
        break;
        case7:printf("sunday \n");
        break;
        default:printf("not a valid day");
    }
    return 0;
}