#include<stdio.h>
#include<conio.h>
void fibonacci(int num);
void main()
{
	int num;
	printf("\n Enter any Number:");
	scanf("%d",&num);
	printf("\n Fibonacci Series is as Follows-");
	
	fibonacci(num);
	getch();
}
void fibonacci(int num)
{
	static int f1=0,f2=1,f3=0;
	if(num>0)
	{
		printf(" %d ",f3);
		f1=f2;
		f2=f3;
		f3=f1+f2;
		
		fibonacci(num-1);
	}
}
