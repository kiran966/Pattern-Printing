//program for pattern printing for character
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,r=0,c=0,j=0;
     char ch='A';

     printf("Enter raw and column values pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n===========pattern=======================\n");
     for(i=1;i<=r;i++)
     {
         for(j=1;j<=c;j++,ch++)
         {
             if(i>=j)
             {
                 printf(" %c ",ch);
             }
             else
             {
                 printf(" ");
             }

              if(ch>'Z')
                {
                    ch='A';
                }
         }
         printf("\n");
     }
     printf("\n========================================\n");
     getch();
     return 0;
 }
