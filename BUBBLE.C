
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,temp,j,n,a[10];
	clrscr();
	printf("\n How Many Number You Want To Enter: ");
	scanf("%d",&n);
	printf("\n Enter The Number: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n-i-1;j++)
	   {
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	   }

	}
	printf("\n After Sorting");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();
}