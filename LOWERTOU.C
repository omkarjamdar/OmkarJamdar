#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[100];
	int i,num;
	clrscr();
	printf("\n How Many character you want to enter:- ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%c",&str[i]);
	}
	printf("\n Upper Case:- ");
	for(i=0;i<num;i++)
	{
		printf("%c",toupper(str[i]));
	}

	getch();
}