#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,i,j,front=-1,rear=-1,data,a[5];
	clrscr();
	do
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Traverse \n4.Exit \n Eneter The Choice:- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				  if(front==(rear+1)%5)
				  {
					 printf("\n Queue Is full");

				  }
				  else
				  {
					if(front==-1)
					{
						rear=(rear+1)%5;
						front=(front+1)%5;

					}
					else
					{
						rear=(rear+1)%5;

					}
					printf("\n Eneter The Data: ");
					scanf("%d",&data);
					a[rear]=data;


				  }
			break;

			case 2:
				  if(front==-1)
				  {
					printf("Queue is Empty");
				  }
				  else
				  {
					printf("\n Dequeued Element:- %d",a[front]);
					front=(front+1)%5;
					if(front==(rear+1)%5)
					{
						front=-1;
						rear=-1;
					}
				  }
			break;

			case 3:
				 do
				 {
					printf("\t %d",a[rear]);
					i=(i+1)%5;
				 }while(i!=(rear+1)%5);
			break;

			case 4:
				 printf("\n Thanks");
			break;

			default:
					printf("\n Invalid Choice");
			break;

		}

	}while(ch!=4);

}