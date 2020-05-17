#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,temp[4];
	int a[4]={1,2,3,4};
	int b[4]={5,6,7,8};
	for(i=0;i<4;i++)
	{
	       temp[i]=a[i];
	}
	for(i=0;i<4;i++)
	{
	       a[i]=b[i];
	}
	for(i=0;i<4;i++)
	{
		b[i]=temp[i];
	}
	 printf("Array A \t Array B");
	for(i=0;i<4;i++)
	{
	       printf("\n\t%d \t%d",a[i],b[i]);
	}


	getch();
}