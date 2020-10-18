//program for pattern printing in numeric using temp
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0,num=0,temp=0;

     printf("Enter raw and column value pattern printing=");
     scanf("%d%d",&r,&c);

     printf("\n Enter number of table in pattern printing=");
     scanf("%d",&num);

     printf("\n=========================================\n");
     for(temp=num,i=1;i<=r;i++)
     {
         for(j=1;i>=j;j++,num+=temp)
         {
             printf(" %-7d ",num);
         }
         printf("\n");
     }
     printf("\n=========================================\n");
     getch();
     return 0;
 }
