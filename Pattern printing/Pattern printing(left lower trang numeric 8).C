//program for Pattern printing in numeric
#include<stdio.h>
#include<conio.h>
  int main()
{
    int i=0,j=0,r=0,c=0,num=5;

    printf("Enter raw and column value pattern printing=");
    scanf("%d%d",&r,&c);

    printf("\n=================================\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;i>=j;j++,num+=5)
        {
            printf(" %-3d ",num);
        }
        printf("\n");
    }
    printf("\n=================================\n");
    getch();
    return 0;
}
