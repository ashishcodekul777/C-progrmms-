#include<stdio.h>
#include<stdlib.h>
int main()
{
     char color[20];
     char noun[20];
     char celeb[20];
     printf("\n Enter the color=");
     scanf("%s",color);
     printf("\n Enter the noun=");
     scanf("%s",noun);
     printf("\n Enter the celebrity=");
     scanf("%s",celeb);
     printf("\n Roses are %s",color);
     printf("\n %s are black",noun);
     printf("\n I love %s",celeb);
     return 0;
}