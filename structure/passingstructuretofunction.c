#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
    float cgpa;
};
void printInfo(struct student s1);
int main()
    {
        struct student s1={205506,"Atharv",6.5};
        printInfo(s1);
        return 0;
    }
    void printInfo(struct student s1)
    {
        printf("student information:\n");
        printf("student rollno=%d\n",s1.rollno);
         printf("student name=%s\n",s1.name);
          printf("student cgpa=%f\n",s1.cgpa);

    }

