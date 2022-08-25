#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
           int k=64;
        for(j=0;j<7;j++)
        {
                if(j>=i&&j<7-i)
                {
                    if(j>=i&&j<4)
                     printf("%c",++k);
                     else if(j>3&&j<7-i)
                     printf("%c",--k);
                }
                else
                printf(" ");
        }
           printf("\n"); 
    }
  
     return 0;
}