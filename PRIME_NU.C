#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,count=0,a;
	clrscr();
	printf("\n Enter The Number: ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count=1;
			break;
		}

	}
	if(count==1)
	{
		printf("\n The Number Is Not Prime");


	}
	else
	{
		printf("\n The Number Is  Prime");
	}

getch();
}