#include<stdio.h>
#include<stdlib.h>
struct node
{
int data, priority;
struct node *next;
}*start; //start is declared
int main()
{int data, pr;
char ch;
do
{
printf("\n Enter element and its priority: ");
scanf("%d%d",&data,&pr); //input from user
struct node *temp, *t;
temp = (struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->priority=pr;
temp->next=NULL;
if(start==NULL)
start = temp;
else if(start->priority>pr)
{
temp->next=start;
start=temp;
}
else
{
t=start;
while( t->next != NULL && (t->next)->priority <= pr )
t = t->next;
temp->next = t-> next;
t->next = temp;
}
printf("\n Do you want to insert more elements?");
scanf(" %c",&ch); //use a space before %c to clean stdin
}while(ch=='y'||ch=='Y');
printf("\n**** Elements in Circular Queue*****\n");
struct node *temp1 = start;
while(temp1!= NULL)
{
printf("\n Data = %d Priority = %d ",temp1->data, temp1->priority);
temp1=temp1->next;
}
return 0;
} //end of Main
