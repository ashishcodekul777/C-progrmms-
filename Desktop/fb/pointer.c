#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age=30;
    int *pAge=&age;
    double gpa=4.5;
    double *pGpa=&gpa;
    char grade='A';
    char *aGrade=&grade;
    printf("\n Age=%d",age);
    printf("\n GPA=%lf",gpa);
    printf("\n Grade=%c",grade);
    return 0;
}