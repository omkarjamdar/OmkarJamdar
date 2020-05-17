#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,a=0,b=1,c;
	clrscr();
	printf("\n Enter The number: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	       printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;

	}

	getch();
}