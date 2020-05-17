#include<stdio.h>
#include<conio.h>
void main()
{
	int i,temp,min,j=0,a[5];
	clrscr();

	printf("\n Enter The Number: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5-1;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\n After Sorting");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}

	getch();
}