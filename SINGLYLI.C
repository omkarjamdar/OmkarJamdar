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
		printf("\n 1.Create At Start\n2.Create At End\n3.Create At Given Location\n4.Traverse\n5.delete at start\n6.delete at end\n7.delete at given location\n8.Exit\nEnter The Choice:- ");
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
				   if(start==NULL)
				   {
					printf("\n Linked List Is Empty..");
				   }
				   else
				   {
					p=start;
					start=p->next;
					printf("\n Deleted Element %d",p->data);
					free(p);
				   }
			break;
			case 6:
				     if(start==NULL)
				     {
					printf("\n Linked List Is empty");
				     }
				     else
				     {
					p=start;
					q=start;
					while(p->next!=NULL)
					{
						p=p->next;
						if(p->next!=NULL)
						{
							q=q->next;
						}
					}
					printf("\n Deleted Element:- %d",p->data);
					q->next=NULL;
					free(p);
				     }
			break;
			case 7:
				      printf("\n Enter The Location:- ");
				      scanf("%d",&loc);
				      if(start==NULL)
				     {
					printf("\n Linked List Is empty");
				     }
				     else
				     {


					if(loc==1)
					{  p=start;
					   start=p->next;
					printf("\n Deleted Element %d",p->data);
					free(p);

					}
					else
					{       i=1;
						p=start;
						while(i<loc && p!=NULL)
						{
						  q=p;
						  p=p->next;
						  i++;
						}
						if(p!=NULL)
						{        q->next=p->next;
							printf("\n Deleted Element:- %d",p->data);
							free(p);
						}
						else
						{
							printf("\n Invalid Location");
						}
					}

				     }
			break;
			case 8:
					printf("\n Thanks");
			break;
			default:
					printf("Invalid Choice..");
			break;
		}

	}while(ch!=8);
	getch();
}