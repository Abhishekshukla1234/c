#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
    float cgpa;
};
int main()
{
    struct student s1;
    s1.rollno=205506;
    strcpy(s1.name,"Abhishek kumar shukla");
    s1.cgpa=6.5;
    printf("student rollno=%d\n",s1.rollno);
     printf("student name=%s\n",s1.name);
      printf("student cgpa=%f\n",s1.cgpa);
}