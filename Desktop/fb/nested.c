#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int nums[3][3]={
                    {1,2,5},
                    {3,4,7},
                    {6,8,9}
                   };
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d",nums[i][j]);
        }
        printf("\n");
    }         
     return 0;
}                   