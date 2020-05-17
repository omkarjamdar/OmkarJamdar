#include<stdio.h>
#include<conio.h>
struct node
{
	struct node *next;
	int data;
};
typedef struct node NODE;
NODE *start,*p,*q;
int ch,loc,i,j;
void main()
{
	clrscr();
	do
	{
		printf("\n 1.Create At Start\n2.Create At End\n3.Create At Given Location\n4.Traverse\n5.Middle Element\n6.Exit\nEnter The Choice:- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					p=(NODE *)malloc(sizeof(NODE));
					printf("\n Enter The Data:- ");
					scanf("%d",&p->data);
					if(start==NULL)
					{
						start=p;
						p->next=NULL;
					}
					else
					{

						p->next=start;
						start=p;
					}
			break;
			case 2:
					p=(NODE *)malloc(sizeof(NODE));
					printf("\n Enter The Data:- ");
					scanf("%d",&p->data);
					if(start==NULL)
					{
						start=p;
						p->next=NULL;
					}
					else
					{
						q=start;
						while(q->next!=NULL)
						{
							q=q->next;
						}
						q->next=p;
						p->next=NULL;
					}
			break;
			case 3:
					p=(NODE *)malloc(sizeof(NODE));
					printf("\n Enter The Location:- ");
					scanf("%d",&loc);
					printf("\n Enter The Data:- ");
					scanf("%d",&p->data);

					if(start==NULL)
					{
						if(loc==1)
						{
							start=p;
							p->next=NULL;
						}
						else
						{
							printf("\n Invalid Location");
						}
					}
					else
					{
						q=start;
						i=1;
						while(i<loc-1 && q!=NULL)
						{
							q=q->next;
							 i++;
						}
						if(q!=NULL)
						{
							p->next=q->next;
							q->next=p;
						}
						{
							printf("\n Invalid Location");
						}
					}
			break;
			case 4:
				q=start;
				while(q!=NULL)
				{
					printf("\t%d",q->data);
					q=q->next;
				}
			break;
			case 5:
				j=1;
				q=start;
				while(q->next!=NULL)
				{
					j++;
					q=q->next;

				}

				printf("\n Length Of LL %d",j);
				p=start;
				i=1;
				j=j/2;
				while(i<=j)
				{
					p=p->next;
					i++;
				}
				printf("Middle Element:- %d",p->data);
			break;

			case 6:
					printf("\n Thanks");
			break;
			default:
					printf("Invalid Choice..");
			break;
		}

	}while(ch!=6);
	getch();
}