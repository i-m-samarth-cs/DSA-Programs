#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SIZE 5

struct PQUEUE
{
	int data;
	int priority;
};

typedef struct PQUEUE pqueue;

pqueue pq[SIZE];
int front;
int rear;
void initialize();
void insert();
void delete();
void display();

void main()
{
	int choice,ans=1;
	initialize();
	
	do
	{
		printf("\n Linear Priority Queue Operations");
		
		printf("\n 1.Insert");
		printf("\n 2.Delete");
 		printf("\n 3.Display");
		printf("\n 4.Exit");
		
		printf("\n Enter Your Choice(1/2/3/4)");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insert();
			        break;
			case 2:delete();
			        break;
			case 3:display();
			        break;
		    case 4:exit(0);
			        break;
			default:printf("\n Wrong Choice");
		}
		printf("\n Do you Want to continue(1 for yes/0 for no)-");
		scanf("%d",&ans);
	}while(ans==1);
	
	getch();
}
void initialize()
{
	front=-1;
	rear=-1;
}
void insert()
{
	int i,j;
	pqueue temp;
	
	if(rear==SIZE-1)
	{
		printf("\n Priority Queue is Full:Overflow");
	}
	else
	{
		if(front==-1)
		{
			front++;
		}
		rear++;
		printf("\n Enter Data with its Priority");
		printf("\n Enter Data:");
		scanf("%d",&pq[rear].data);
		printf("\n Enter Priority:");
		scanf("%d",&pq[rear].priority);
		
		printf("\n Data Inserted Successfully");
	}
}
void delete()
{
	int i,j;
	pqueue temp;
	if(front==-1)
	{
		printf("\n Priority Queue is Empty:Underflow");
	}
	else
	{
			//Selection Sort
		for(i=front;i<=rear-1;i++)
		{
			for(j=i+1;j<=rear;j++)
			{
				if(pq[i].priority<pq[j].priority)
				{
					temp=pq[i];
					pq[i]=pq[j];
					pq[j]=temp;
				}
			}
		}
		int element=pq[front].data;
		
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
		printf("\n Element %d is Deleted Succesfully",element);
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\n Priority Queue is Empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n Element %d",i+1);
			
			printf("\n Data:%d",pq[i].data);
			printf("\n Priority:%d",pq[i].priority);
		}
	}
}
