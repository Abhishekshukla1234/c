#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
    float cgpa;
};
int main()
{
    {
    struct student s1;
    s1.rollno=205506;
    strcpy(s1.name,"Abhishek kumar shukla");
    s1.cgpa=6.5;
    printf("student rollno=%d\n",s1.rollno);
     printf("student name=%s\n",s1.name);
      printf("student cgpa=%f\n",s1.cgpa);
}
 {  
    struct student s2;
    s2.rollno=205518;
    strcpy(s2.name,"Ambikesh Mishra");
    s2.cgpa=7.5;
    printf("student rollno=%d\n",s2.rollno);
     printf("student name=%s\n",s2.name);
      printf("student cgpa=%f\n",s2.cgpa);
      }
      {
    struct student s3;
    s3.rollno=205514;
    strcpy(s3.name,"ajitesh");
    s3.cgpa=4.5;
      printf("student rollno=%d\n",s3.rollno);
     printf("student name=%s\n",s3.name);
      printf("student cgpa=%f\n",s3.cgpa);
}
}