#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
           int k=64;
        for(j=1;j<10;j++)
        {
            if(j>=5-i && j<=5+i)
            {
                if(j>=5-i&&j<=5)
                {
                   printf("%c",++k);
                   
                }
                 else if(j>5&&j<=5+i)
                {
                    
                    printf("%c",--k);
                }
               
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    // for(i=0;i<5;i++)
    //  {
    //     int k=64;
    //    for(j=0;j<9;j++)
    //    {
    //     if(j>=4-i&&j<5)
    //      printf("%c",++k);
    //      else
    //       printf(" ");
    //    }
       
    //    printf("\n");
    //  }
     return 0;
}