#include <stdio.h>
#include <stdlib.h>
void display(); 
struct node
{
int info;
struct node *link; 
}*start=NULL; 
int main(void)
{
setbuf(stdout, NULL);
int data;
char ch;
struct node *q, *tmp;
do
{
printf("Enter element :\n");
scanf("%d", &data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->link=NULL;
if(start==NULL) //insertion of first node
 start=tmp;
else //insertion of subsequent nodes
{
 q=start; while(q->link!=NULL)
 q=q->link; q->link=tmp;
}
printf("Do you want to insert more elements?");
scanf(" %c",&ch); //use a space before %c to clear from stdin 
}while(ch=='y'||ch=='Y');
display();
return 8;
}
void display()
{
struct node *q; if(start==NULL)
printf("List is empty!!\n"); else
printf("**** Elements in Linked List ****\n");
q=start;
while(q!=NULL)
{
printf("%d\t",q->info);
q=q->link;
}
}

