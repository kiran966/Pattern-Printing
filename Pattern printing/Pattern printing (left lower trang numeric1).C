//program for left lower trangular pattern printing in numeric
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0;

     printf("Enter raw and column pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n======================================\n");
     for(i=1;i<=r;i++)
     {
         for(j=1;i+j<=r+1;j++)
         {
             printf(" %d ",j);
         }
         printf("\n");
     }
     printf("\n======================================\n");
     getch();
     return 0;
 }
