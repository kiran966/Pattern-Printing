//program for pattern printing char
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0;
     char ch='A';

     printf("Enter raw and column value pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n=============Pattern printing ================\n");
     for(i=1;i<=r;i++)
     {
         for(j=1;j<=c;j++)
         {
             if(i>=j)
             {
                 printf(" %d ",i);
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
     printf("\n=============================================\n");
     getch();
     return 0;
 }
