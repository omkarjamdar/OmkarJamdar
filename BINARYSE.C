#include<stdio.h>
#include<conio.h>
void main()
{
	int i,low=0,flag=0,mid,high=7,a[8],key;
	clrscr();
	printf("\n Enter The element:- ");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter Element To search:- ");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=low+high/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(mid<low)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}

	if(flag==1)
	{
		printf("\n Element Is Found");
	}
	else
	{
		printf("\n Element Is Not Found");
	}

	getch();
}