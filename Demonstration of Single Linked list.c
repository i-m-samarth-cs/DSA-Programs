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
struct node *link;
}*start=NULL;
int data,item,nl,pos,i,m; 
int main()
{
int n;
setbuf(stdout, NULL);
printf("\n****Linked List*****\n");
printf("\nl. Create\n2. Insert at Beginning\n3.Insert at End\n4.Insert AfterPosition\n5.Delete\n6.Search\n7.Display\n8.Exit\n");
while(1)
{
printf("\n Enter Your Choice :(1.Create 2.Insert at Beg. 3.Insert at End 4.Insertafter Pos. 5.Delete 6.Search 7.Display 8.Exit)\n");
scanf("%d", &n);
switch(n)
{
case 1:
create();
break; 
case 2:
insert_at_beg();
break; 
case 3:
insert_at_end();
break; 
case 4:
insert_after_pos();
break; 
case 5:
del();
break;
case 6:
search()
;
break; 
case 7:
display();
break; 
case 8:
exit(0); 
default:
printf("\n Wrong Choice !!\n");
}
}
return 0;
void create() {
struct node *q, *tmp;
printf("Enter element :\n");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp
->info=data;
tmp
->link=NULL;
if(start==NULL)
start=tmp
;
else
{
 q=start;
while(q
->link!=NULL)
q=q
->link;
q
->link=tmp;
}
getch();
} 
void insert_at_beg() 
{
struct node *tmp;
printf("\n Enter the element to be inserted :\n");
scanf("%d", &data);
tmp=malloc(sizeof(struct node));
tmp
->info=data;
tmp
->link=start;
start=tmp;
display(); 
}
void insert_at_end() {
struct node *tmp,*q;
printf("\n Enter the element to be inserted :\n");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp
->info=data;
tmp
->link=NULL;
if(start==NULL)
start=tmp;
else
{
	q=start;
while(q->link!=NULL)
q=q->link; 
q->link=tmp;
}
display();
}
void insert_after_pos()
{
display();
struct node *q,*tmp;
int index;
tmp=malloc(sizeof(struct node));
printf("\n Enter the element to be inserted :\n");
scanf("%d", &data);
tmp->info=data;
tmp->link=NULL;
if(start==NULL)
{
start=tmp;
}
else
{
printf("Enter index after which element to be inserted :\n");
scanf("%d", &index);
q=start;
for(i=0;i<index;i++)
{
q = q->link; 
if(q==NULL)
{
printf("There are less elements\n"); 
return;
}
}
tmp->link = q->link; 
q->link = tmp;
}
display();
}
void del()
{
struct node *q,*tmp;
printf("Enter the element to be deleted :\n");
scanf("%d", &data);
if(start->info==data) //deletion of first node
{
tmp=start;
start=start->link;
free(tmp);
display();
return; 
}
q=start; 
while(q->link->link!=NULL) //deletion middle node
{if(q->link->info==data)
{
tmp=q->link;
q->link=tmp->link;
free(tmp);
display();
return;
}
q=q->link;
}
if(q->link->info==data) //deletion of last node
{
tmp=q->link;
q->link=NULL;
free(tmp);
display();
return;
}
printf("\n Element not found \n");
}
void search()
{
struct node *tmp;
int i=0;
printf("\n Enter the element to be searched :");
scanf("%d",&item);
tmp=start;
while(tmp!=NULL)
{
if(tmp->info==item)
{
printf ("Element found at index: %d\n",i);
 return;
}
tmp=tmp->link;
i++;
}
if(tmp->link==NULL)
printf("Element not found \n");
}
void display()
{
struct node *q;
if(start==NULL)
printf("List is empty!!\n"); 
else
{
printf("**** Elements in Linked List ****\n");
q=start;
while(q!=NULL)
{
printf("%d\t", q->info); 
q=q->link;
}
}
}





