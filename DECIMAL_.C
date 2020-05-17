#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,a[100];
	clrscr();
	printf("\n Enter The Number:- ");
	scanf("%d",&num);
	for(i=0;num>0;i++)
	{
		a[i]=num%16;
		num=num/16;
	}
	printf("\n Hexadecimal Number:- ");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	getch();
}