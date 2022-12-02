#include<stdio.h>
struct student{
    char name[50];
    int rollno;
    float cgpa;
};
int main ()
{
    
    struct student s1={"Abhishek",205506,6.5};
    printf("student name =%s\n",s1.name);
    printf("student rollno =%d\n",s1.rollno);
    printf("student name =%f\n",s1.cgpa);
    return 0;
}