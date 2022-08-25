#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        if(i<=4)
        {
            for(j=0;j<9;j++)
            {
                if(j>=4-i&&j<=4+i)
                {
                    printf("*");
                }
                else
                printf(" ");
            }
        }
        else if(i>4)
        {
            for(j=0;j<9;j++)
            {
               if(j>=i-4&&j<=12-i)
               {
                printf("*");
               } 
               else
               printf(" ");
            }
        }
        printf("\n");
    }
}