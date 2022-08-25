#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        if(i>0)
        {
            for(j=0;j<9;j++)
            {
                if(j==i||j==8-i)
                {
                    printf("*");
                }
                else
                printf(" ");
            }
        }
        else if(i==0)
        {
            for(j=0;j<9;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}