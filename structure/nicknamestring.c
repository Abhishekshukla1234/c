#include<stdio.h>
#include<string.h>
typedef struct computerEngineeringstudent
{
    int rollno;
    float cgpa;
    char name[100];
}
coe;
int main()
{
    coe s1;
    s1.rollno=205506;
    s1.cgpa=7.5;
    strcpy(s1.name,"Abhishek");
    printf("student name is %s\n",s1.name);
return 0;
}