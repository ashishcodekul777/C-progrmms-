#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade='F';
    switch(grade)
    {
        case 'A':
          printf("You did really great");
         break;
        case 'B':
          printf("\n You did allright");
         break;
         case 'C':
          printf("\n You did poorly");
         break;
         case 'D':
          printf("\n You did very bad");
         break;
         case 'E':
          printf("\n You are failed");
         break; 
        default:
         printf("Invalid grade");
    }
    return 0;
}