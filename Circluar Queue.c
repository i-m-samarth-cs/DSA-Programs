#include <stdio.h>
#include<process.h>
#include <conio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
int ch;
setbuf(stdout, NULL); //turn off buffering of stdout
printf("\n*** Circular Queue Menu ***");
printf("\nl.Insertion \n2.Deletion \n3.Display \n4.Exit");
while(1)
{
printf("\nEnter the Choice(l-4):");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nWrong Choice!!");
}
}
return 0;
}
void enqueue()
{
if((front == rear + 1) || (front == 0 && rear == MAX-1))
printf("\n Queue is Full!!");
else
{
if(front == -1)
front=0;
rear=(rear+1)%MAX;
printf("\n Enter element to Insert:");
scanf("%d",&queue[rear]);
}
printf("\nAfter Insertion position of Front=%d and Rear=%d", front,
rear);
}
void dequeue()
{
	if(front==-1)
{
printf("\n Queue is Empty!!");	
}
else
{
printf("\n Deleted Element is %d",queue[front]);
if (front == rear)
{
front = -1;
rear = -1;
}
else
front=(front +1)%MAX;
}
printf("\n After Deletion position of Front=%d and Rear=%d ",front, rear);
}


void display()
{
int i;
if(rear == -1)
printf("\n Queue is Empty!!");
else
{
printf("\n**** Elements in Queue*****.\n");
for(i=front; i!= rear; i=(i+1)%MAX)
printf("%d ", queue[i]);
printf("%d ", queue[i]);
}
}
