#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
     if(i<4)
     {
        for(j=0;j<5;j++)
     {
        if(j==4 || j==4-i)
        printf("*");
        else
        printf(" ");
      }
     }
    else
     {
        for(j=0;j<5;j++)
        printf("*");
     }
     printf("\n");
    }
    return 0;
}