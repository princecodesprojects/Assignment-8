#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<7;i++)
    {
           int k=64;
        for(j=0;j<=6-i;j++)
        {
           printf("%c",++k);
        }
        for(j=0;j<2*i-1;j++)
        {
           printf(" ");
        }
        if(i==0)
        k--;
        while(k>=65)
        {
            printf("%c",k--);
        }
           printf("\n"); 
    }
  
     return 0;
}