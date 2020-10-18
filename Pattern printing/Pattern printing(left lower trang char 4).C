//program for pattern printing char
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,r=0,c=0;
     char ch='A';

     printf("Enter raw and column pattern printing=");
     scanf("%d%d",&r,&c);

     for(i=1;i<=c;i++,ch++)
     {
         for(j=1;j<=r;j++)
         {
             if(i>=j)
             {
                 printf("%c",ch);
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
     getch();
     return 0;
 }
