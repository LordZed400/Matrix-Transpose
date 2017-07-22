#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3];
int i,j;
printf("Please Input a 3X3 Matrix\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	  gotoxy(18+i*4,3+j);
	  scanf("%d",&a[i][j]);
	}
}
printf("\nThe Transpose Matrix is\n");
for(j=0;j<3;j++)
{
	for(i=0;i<3;i++)
	{
	  gotoxy(18+i*4,9+j);
	  printf("%d",a[j][i]);
	}
}
getch();
}
