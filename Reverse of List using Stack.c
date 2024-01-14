#include<stdio.h>
#include<conio.h>
#define SIZE 10
//Global Stack using structure
struct STACK
{
	int a[SIZE];
	int top;
};

typedef struct STACK stack;

//Function Declaration
void intialize(stack *s);			//Empty Stack
void push(stack *s,int element);	//Insert
int pop(stack *s);
//Main()
void main()
{
	int a[SIZE],element,i;
	
	//Stack is declared Local to main
	stack s;
	
	//Stack is Empty Intially
	intialize(&s);
	
	//Accept Array Elements
	printf("\n Elements Accepting of Array A");
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//Display Array Elements
	printf("\n Elements Displaying of Array A");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	//Insert i.e push Elements into the Array
	for(i=0;i<5;i++)
	{
		push(&s,a[i]);
	}
	//Pop()
	printf("\n Elements of Array A after Reversing:");
	{
		element=pop(&s);
		printf(" %d ",element);
	}
	
	getch();
}
//Function Defination'
void intialize(stack *s)
{
	s->top-1;
}

void push(stack *s,int element)
{
	if(s->top==SIZE-1)
	{
		printf("\n Stack is Full=Overflow");
	}
	else
	{
		s->top++;
		s->a[s->top]=element;
	}
}
int pop(stack *s)
{
	int element;
	
	if(s->top==-1)
	{
		return -999;
	}
	else
	{
		element=s->a[s->top];
		s->top--;
		return element;
	}
	return;
}

