#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double num1,num2;
    char op;
    printf("\n Enter the first nos=");
    scanf("%lf",&num1);
    printf("\n Enter the second nos=");
    scanf("%lf",&num2);
    printf("Enter the operator=");
    scanf("%c",&op);
    if(op == '+')
     printf("\n %f",num1+num2);
    else if(op == '-')
     printf("\n %f",num1-num2);
     else if(op == '*')
      printf("\n %f",num1*num2);
     else if(op == '/')
      printf("\n %f",num1/num2);
     else
      printf("\n Invalid operator");
      return 0;
}