#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Eneter The Number For A and B:- ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swap Numbers Are");
	printf("\nNumber A:- %d and Number B:-%d",a,b);



	getch();
}

