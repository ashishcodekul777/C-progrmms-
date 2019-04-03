#include<stdio.h>
#include<stdlib.h>
int main()
{
    int secretnumber=5;
    int guess=0;
    int guesscount=0;
    int guesslimit=3;
    int outofguessess=0;
    while(guess!=secretnumber && outofguessess==0)
    {
        if(guesscount<guesslimit)
        {
            printf("\n Enter the number=");
            scanf("%d",&guess);
            guesscount++;
        }
        else
        {
            outofguessess=1;
        }
    }
    if(outofguessess==1)
     printf("\n outofguessess");
    else
     printf("\n You Win"); 
}