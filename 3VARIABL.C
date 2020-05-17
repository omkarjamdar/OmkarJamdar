#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("\n Eneter The Number For A and B:- ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swap Numbers Are");
	printf("\nNumber A:- %d and Number B:-%d  ",a,b);



	getch();
}

