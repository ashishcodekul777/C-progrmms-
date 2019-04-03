#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int age;
    char name[20];
    char major[10];
    double gpa;
};
int main()
{
    struct student student1;
    student1.age=20;
    student1.gpa=3.2;
    strcpy(student1.name,"Jim");
    strcpy(student1.major,"Business");
    printf("%f",student1.gpa);
    printf("\n %s",student1.name);
    printf("\n %d",student1.age);
    printf("\n %s",student1.major);
    return 0;
}
