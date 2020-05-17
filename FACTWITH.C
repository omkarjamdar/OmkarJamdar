#include<stdio.h>
#include<conio.h>
int factorial_num(int num);
void main()
{
	int num;
	clrscr();
	printf("\n Enter The Number:- ");
	scanf("%d",&num);
	printf("\n Factorial Of Number %d:- %d",num,factorial_num(num));
	getch();
}
int factorial_num(int num)
{
	if(num>=1)
	{
	  return num*factorial_num(num-1);
	}
	else
	{
		return 1;
	}

}