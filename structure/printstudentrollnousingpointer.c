#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    float cgpa;
};
int main(){
    struct student s1={205506,"Abhishek",6.5};
    printf("student rollno=%d\n",s1.rollno);
    struct student*ptr=&s1;
    printf("student rollno=%d\n",(*ptr).rollno);
    return 0;
}