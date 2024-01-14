#include<stdio.h>
#include<conio.h>

void main()
{
	union employee
	{
		char name[10];
		int age;
		float salary;
	};
	union employee e;
	
	printf("\n Enter Name of Employee: ");
	scanf("%s",e.name);
	
	printf("\n Name of Employee:%s",e.name);
	
	printf("\n Enter Age of Employee: ");
	scanf("%d",&e.age);
	
	printf("\n Age:%d",&e.age);
	
	printf("\n Enter Salary: ");
	scanf("%f",&e.salary);
	
	printf("\n Salary of Employee:%f",e.salary);
}
