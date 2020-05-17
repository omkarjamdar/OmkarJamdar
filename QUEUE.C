#include<stdio.h>
#include<conio.h>
void main()
{
	int data,j,ch,a[5],top=-1;
	clrscr();
	do
	{
		printf("\n1.Enqueue \n2.Dequeue\n3.traverse \n4.Exit\nEnter Choice:- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top==4)
				{
					printf("queue is full");
				}
				else
				{
					top++;
					printf("\n Enter The Element:- ");
					scanf("%d",&data);
					a[top]=data;
				}
			break;

			case 2:
				if(top==-1)
				{
					printf("\n Queue Is Empty");
				}
				else
				{
					printf("\n Dequeued Element:- %d",a[top]);
					top--;
				}

			break;

			case 3:
					for(top=0;top<5;top++)
					{
						printf("\t%d",a[top]);
					}
			break;

			case 4:
				printf("\n Thanks");
			break;

			default:
				printf("\n Invalid Choice");
			break;
		}
	}while(ch!=4);

	getch();
}