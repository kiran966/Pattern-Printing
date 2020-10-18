//program for pattern printing of characters
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0;
     char ch='A';

     printf("Enter raw and column values pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n=================Pattern=======================\n");
     for(i=1;i<=r;i++)
     {
         for(j=1;j<=c;j++,ch++)
         {
             if(ch>'Z')
             {
                 ch='A';
             }
             if(i>=j)
             {
                 printf(" %c ",ch);
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
     printf("\n==========================================\n");
     getch();
     return 0;
 }
