#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20];
    printf("\n Enter your name=");
    fgets(name,20,stdin);
    printf("\n your name is %s=",name);
    return 0;
}