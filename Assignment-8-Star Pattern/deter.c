#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=1; i<=4; i++)
    {
        int k=1;
        for(int j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                {
                 printf("%d",k++);
                }
                else if(j>=3)
                {
                  printf("%d",k--);
                }
            }
            else
            {
                printf(" ");
            }
        }
   printf("\n");
    }
    return 0;
}