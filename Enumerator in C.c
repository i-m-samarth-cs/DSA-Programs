#include<stdio.h>
#include<conio.h>

void main()
{
	//enum Declaration
	enum week mon,tue, wed,thur, fri ,sat ,sun ;
	
	//enum variable declaration
	enum week day;
	
	//enum variable initialization
	day=mon=0;
	printf("\n\n Monday=%d",day);
	
	day=tue=1;
	printf("\n\n Tuesday=%d",day);
	
	day=wed=2;
	printf("\n\n Wednesday=%d",day);
	
	day=thur=3;
	printf("\n\n Thursday=%d",day);
	
	day=fri=4;
	printf("\n\n Friday=%d",day);
	
	day=sat=5;
	printf("\n\n Saturday=%d",day);
	
	day=sun=6;
	printf("\n\n Sunday=%d",day);
}
