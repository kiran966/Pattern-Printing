//program for pattern printing in numeric
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0,n1=1,n2=0,n3=0;

     printf("Enter raw and column value pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n======================================\n");
     for(i=1;i<=r;i++)
     {
         for(j=1;i>=j;j++)
         {
             printf(" %-3d ",n3);
             n3=n1+n2;
             n1=n2;
             n2=n3;
         }
         printf("\n");
     }
     printf("\n======================================\n");
     getch();
     return 0;
 }
