#include <stdio.h>
#include <malloc.h> 
#include <process.h>
void create();
void insert_at_beg();
void insert_at_end();
void insert_after_pos(); 
void del();
void search(); 
void display();
struct node
 {
int info;
struct node* next;
struct node* prev; 
 }*start=NULL; 
int data, item, n1, pos, i, m;
int main()
{
int n;
setbuf( stdout, NULL);
printf("\n****Doubly Linked List*****\n");
printf("\n1.Create\n2.Insert at Beginning\n3.Insert at End\n4.Insert AfterPosition\n5.Delete\n 6.Display\n 7.Exit\n"); 
while(1)
{
printf("\n Enter Your Choice :(1.Create 2.Insert at Beg. 3.Insert at End 4.Insert after Pos. 5.Delete 6.Display 7.Exit)\n");
scanf("%d",&n);
switch(n)
{
case 1:
create();break; 
case 2:
insert_at_beg();break; 
case 3:
insert_at_end(); break;
case 4:
insert_after_pos(); break;
case 5:
del(); break; 
case 6:
display(); break; 
case 7:
exit(0); 
default:
printf("\nWrong Choice !!\n");
}
}
return 0;
}
void create()
{
int data;
struct node *tmp;
printf("\n Enter the first element to be inserted :\n");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
if(start == NULL)
start==tmp; 
display();
}
void insert_at_beg()
{
int data;
struct node *tmp;
printf("\n Enter the element to be inserted :\n");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
if(start == NULL)
start = tmp;
else
{
start->prev = tmp;
tmp->next = start;
start = tmp;
} 
display();
}
void insert_at_end()
{
int data;
struct node *q,*tmp;
printf("\n Enter the element to be inserted :\n");
scanf("%d%&data");
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
if(start == NULL)
start = tmp;
else
{
q=start;
while(q->next != NULL)
q = q->next; // Go To last Node
q->next = tmp;
tmp->prev = q;
} 
display();
}
void insert_after_pos()
{
int data;
struct node *q,*tmp;
tmp=malloc(sizeof(struct node));
printf("\nEnter the element to be inserted :\n");
scanf("%d",&data);
tmp->info=data;
tmp->prev=NULL;
tmp->next=NULL;
if(start==NULL)
{
start=tmp;
}
else
printf("Enter index after which element to be inserted :\n");
scanf("%d",&pos);
q=start;
for(i=0;i<pos;i++)
{
q = q->next;
}
tmp->next = q->next;
if(q->next!=NULL)
{
q->next->prev=tmp;
}
q->next = tmp;
tmp->prev=q;
display();
}
void del()
{
struct node *tmp,*q,*prev;
printf("Enter the element to be deleted :\n");
scanf("%d", &data);
if(start->info==data) //deletion of first node
{
tmp=start; 
if(tmp->next!=NULL)
{
start->next->prev=NULL;
}
start=start->next;
free(tmp); 
display(); 
return;
}
q=start;
while(q->next->next!=NULL) //deletion of middle node
{
if(q->next->info==data)
{
prev=q->next->prev;
tmp=q->next;
q->next=tmp->next;
q->next->prev=prev;
free(tmp);
display();
return;
}
q=q->next;
}
if(q->next->info==data) //deletion at end
{
tmp=q->next;
q->next=NULL;
free(tmp);
display();
return;
}
printf("\n Element not found \n");
}
void display()
{
struct node *q;
if(start==NULL)
printf("List is empty!!\n");
else
{
printf("**** Elements in Doubly Linked List ****\n");
q=start;
while(q!=NULL)
{
printf("%d\t", q->info);
q=q->next;
}
}
}

