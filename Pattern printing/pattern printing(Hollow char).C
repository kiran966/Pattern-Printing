//progrm for pattern printing hollow start
#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0,j=0,c=0,r=0;
     char ch='A';


     printf("\n Enter Row & Column Pattern print=");
     scanf("%d%d",&r,&c);

     printf("\n==================================\n");

     for(i=1;i<=r;i++)
     {
         ch='A';
         for(j=1;j<=c;j++)
         {
             if(i==1 || i==r)
             {
                 printf("%c",ch++);
             }
             else if(j==1 || j==c)
             {
                 printf("%c",ch + i - 1);

             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n\n");
     }
     printf("\n==================================\n");
     getch();
     return 0;
 }
