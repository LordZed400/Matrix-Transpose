#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 100
void main()
{
clrscr();
int x, y, i, j;
int *(*a);
printf("Give No. of columns: ");
scanf("%d",&x);
printf("Give No. of rows: ");
scanf("%d",&y);
//a = (int * * ) malloc(x*sizeof(int));
for(i=1;i<=y;i++)
	{
	gotoxy(3,3+i);
	printf("%c",179);
	}
for(i=1;i<=y;i++)
	{
	gotoxy(2+y*4,3+i);
	printf("%c",179);
	}
for(i=0; i<x;i++)
{
	*(a+i) = (int *) malloc(y*sizeof(int));
	for(j=0; j<y;j++)
	{
	gotoxy(5+i*3,4+j);
	scanf("%d",(*(a+i)+j));
	}
}
printf("\nTranspose Matrix is");
for(i=1;i<=x;i++)
	{
	gotoxy(3,9+i);
	printf("%c",179);
	}
for(i=1;i<=x;i++)
	{
	gotoxy(2+y*4,9+i);
	printf("%c",179);
	}

for(i=0; i<y;i++)
{
	for(j=0; j<x;j++)
	{
	gotoxy(5+i*3,10+j);
	printf("%d",*(*(a+j)+i));
	}
}
getch();
}
