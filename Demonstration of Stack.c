#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define SIZE 5
//Global Stack using Structure
struct STACK
{
	int a[SIZE];
	int top;
};
//User Defined Data type
typedef struct STACK stack;

//Functions Declaration
void intialize(stack *s);			//Empty Stack
void push(stack *s,int element);	//Insert
int pop(stack *s);					//Delete
void display(stack *s);

//Main
void main()
{
	int choice,ans=0,element=0;
	
	//Stack is declared local to main
	stack S;
	
	system("cls");
	//Stack is Empty
	intialize(&S);
	
	do
	{
		system("cls");
		
		printf("\n STACK OPERATIONS");
		printf("\n 1-PUSH - Insert Element");
		printf("\n 2-POP -  Delete Element");
		printf("\n 3-Display");
		printf("\n 4- EXIT");
		
		printf("\n Enter Your Choice(1/2/3/4)");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("\n Enter the Element to be Inserted:");
			       scanf("%d",&element);
			       
			       //Function Call
			       push(&S,element);
			       
			       break;
			
			case 2://Function Call
					element=pop(&S);
			
					if(element==-999)
					{
						printf("\n Stack is Empty-Underflow");
					}
					else
					{
						printf("|n Element %d is POPED i.e deleted from Stack",element);
					}
					break;
			
			case 3:printf("\n Displaying Elements of Stack \n");
				   //Function Call
			       display(&S);
				   break;
			
			case 4:printf("\n The Program is Terminating......");
				   exit(0);
				   break;
				   
			default:printf("\n Wrong Choice");
		}
		
		printf("\nDo you Want to Continue (1 for Yes/0 for No)");
		scanf("%d",&ans);
	}while(ans==1);
	
	getch();
}
//Function Defination
void intialize(stack *s)
{
	s->top==SIZE-1;
}

void push(stack *s,int element)
{
	if(s->top==SIZE-1)
	{
		printf("\n Stack is Full-Overflow");
	}
	else
	{
		s->top++;
		s->a[s->top]=element;
		printf("\n Element is Inserted Successfully");
	}
}
int pop(stack *s)
{
	int element;
	
	if(s->top==-1)
	{
		return-999;
	}
	else
	{
		element=s->a[s->top];
		s->top--;
		return element;		//Return Poped Element
	}
	return;
}
void display(stack *s)
{
	int i;
		if(s->top==-1)
		{
			printf("\n STACK IS EMPTY");
		}
		else
		{
			for(i=s->top;i>=0;i--)
			{
				printf("\n %d",s->a[i]);
			}
		}
}
