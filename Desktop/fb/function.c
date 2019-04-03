#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double cube(double num)
{
    double result=num*num*num;
    return result;
}
int main()
{
    printf("\n Answer=%f",cube(3.0));
    return 0;
}