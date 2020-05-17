#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,flag=0;
	clrscr();
	printf("\n Enter The Number: ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Given Number Is Prime");
	}
	else
	{
		printf("\n Given Number Is Not Prime");
	}

	getch();
}