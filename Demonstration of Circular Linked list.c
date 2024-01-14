#include<stdio.h> 
#include<conio.h> 
#include<malloc.h> 
#include<stdlib.h> 
void create();
void insert_at_beg();
void insert_at_end();
void insert_after_pos();
void del_at_beg(); 
void del_after_pos(); 
void del_at_end(); 
void search(); 
void display(); 
struct node
{
int info;
struct node *link; 
} *last; 
int data,pos; 
int main()
{
int ch;
last=NULL;
setbuf(stdout, NULL);
printf("\n****Circular Linked List*****\n");
printf("\nl. Create\n2.Insert at Beginning\n 3.Insert at End\n 4.Insert AfterPosition\n 5.Delete at Beginning\n 6.Delete at End\n 7.Delete after Position\n8.Search\n 9.Display\nl0.Exit\n");
while(1)
{
printf("\nEnter Your Choice :(1.Create 2.Insert at Beg. 3.Insert at End 4.Insertafter Pos. 5.Delete at Beginning 6.Delete at end 7.Delete after Pos. 8.Search9.Display 10.Exit)\n");
Scanf("%d",&ch);
switch(ch)
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
del_at_beg();
break; 
case 6:
del_at_end();
break; 
case 7:
del_after_pos();
break; 
case 8:
search();
break; 
case 9:
display();
break; 
case 10:
exit(0); 
default:
printf("\n Wrong Choice !!\n");
}
}
return 0;
}
void create()
{
struct node *tmp;
printf("Enter element :\n");
scanf("%d",&data);
tmp=malloc(sizeof(struct node));
tmp->info=data;
if(last==NULL)
{
last=tmp;
tmp->link=last;
}
else
{
tmp->link=last->link;
last->link=tmp;
last=tmp;
} 
}
void insert_at_beg()
{
struct node *tmp;
printf("Enter the element to be inserted :\n"); 
scanf("%d",&data); 
tmp=malloc(sizeof(struct node)); 
tmp->info=data; 
tmp->link=last->link; 
last->link=tmp; 
display(); 
}
void insert_at_end() 
{
struct node *tmp; 
printf("Enter element :\n"); 
scanf("%d",&data); 
tmp=malloc(sizeof(struct node)); 
tmp->info=data; 
tmp->link=last->link; 
last->link=tmp; 
last=tmp; 
display(); 
}
void insert_after_pos() 
{
struct node *tmp, *q;
printf("Enter the elements : ");
scanf("%d",&data);
printf("Enter index after which element to be inserted");
scanf("%d",&pos);
int i; 
q=last->link;
for(i=0;i<pos;i++)
{
q=q->link;
if(q==last->link)
{
printf("There are less elements\n");
return;
}
}
tmp=malloc(sizeof(struct node));
tmp
->link=q
->link
;
tmp
->info=data;
q
->link=tmp;
if(q==last)
last=tmp;
display()
;
}
void del_at_beg() {
struct node *q;
if(last
->link==last) //single node in the list
{
last=NULL;
free(last);
printf("List is empty!!");
return;
} 
if(last==NULL) {
printf("List is empty"); }
q=last
->link;
last
->link=q
->link;
free(q);
printf("First element deleted!!\n");
display();
return; }
void del_at_end() {
struct node *q; q=last->link;
if(last==NULL) {
printf("List is empty"); }
if(last
->link==last) //single node in the list
{
last=NULL;
free(last)
;
printf("List is empty!!");
return;
}
while(q
->link!=last)//traverse upto Last pointer
{
q=q
->link; }
q
->link=last
->link;
free(last);
last=q;
printf("Last element deleted!!\n");
display();
return; }
void del_after_pos() 
{
struct node *tmp, *q;
int i,pos;
printf("Enter index after which element to be deleted : ");
scanf("%d",&pos);
q=last->link;
for(i=0;i<pos;i++)
{
q=q->link;
if(q==last)
{
printf("There are less elements\n");
return;
} 
}
if(q->link==last) 
{
q->link=last->link;
free(last);
last=q;
display();
return;
}
tmp=q->link;
q->link=tmp->link;
free(tmp);
display();
return;
}
void display()
{
struct node *q;
if(last==NULL)
{
printf("List is empty!!\n");
return; 
}
printf("**** Elements in Circular Linked List ****\n"); 
q=last->link; 
while(q!=last) 
{
printf("%d\t",q->info);
q=q->link; 
}
printf("%d\t", last->info);
}
void search() 
{
struct node *tmp;
int i=0,item;
printf("\n Enter the element to be searched :");
scanf("%d", &item);
tmp=last->link;
while(tmp!=last)
{
if(tmp->info==item)
{
printf("\n Element %d is found at index : %d \n", item, i); 
return;
}
tmp=tmp->link; 
++i;
} 
if(last->info==item)
printf("\n Element %d is found at index : %d \n", item, i); 
else
printf("\n Element not found \n"); 
}
