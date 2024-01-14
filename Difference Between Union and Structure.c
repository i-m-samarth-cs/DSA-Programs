#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	//union Declaration
	union data1
	{
		int a;
		float b;
		char str[20];
	};
	//union variable declaration
	union data1 d1;
	
	struct data2
	{
		int a;
		float b;
		char str[20];
	};
	//struct variable declaration
	struct data2 d2;
	
	//1.Union
	//In Union only one member can contain a value at given time
	d1.a=10;					//Not Stored
	d1.b=20;					//Not Stored
	strcpy(d1.str,"ABC");		//Stored
	//size Allocated to Union
	printf("\n Size Allocated to Union is %d",sizeof(d1));
	//Only One Member Can Contain Value
	printf("\n A=%d B=%f STR1=%s",d1.a,d1.b,d1.str);
	
	//2.Structure
	//In Structure all the members can contain values at given time
	d2.a=10;					//stored
	d2.b=20;					//Stored
	strcpy(d2.str,"ABC");		//Stored
	
	//size Allocated to Structure
	printf("\n Size Allocated to Structure=%d",sizeof(d2));
	
	//all members can Contain Values
	printf("\n A=%d B=%f STR2=%s",d2.a,d2.b,d2.str);
}
