#include<stdio.h>
#include<conio.h>

void main()
{
	struct student
	{
		char name[10];
		int rollno;
		float marks;
	};
	struct student s;
	
	printf("\n\n Enter Name: ");
	scanf("%s",s.name);
	
	printf("\n Enter Roll no: ");
	scanf("%d",&s.rollno);
	
	
	printf("\n Enter Marks: ");
	scanf("%f",&s.marks);

	
	printf("\n Name=%s",s.name);
	printf("\n Roll No=%d",s.rollno);
	printf("\n Marks=%f",s.marks);
	
}
