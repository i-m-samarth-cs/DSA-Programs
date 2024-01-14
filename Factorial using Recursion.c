#include<stdio.h>
#include<conio.h>

long int factorial(int num);

int main()
{
	int num;
	long int fact=1;
	
	printf("\n Enter any Number:");
	scanf("%d",&num);
	
	fact=factorial(num);
	
	printf("\n Factorial=%d",fact);
	return 0;
}
long int factorial(int num)
{
	long int fact=1;
	if(num>0)
	{
		if(num==0)
		{
			return 1;
		}
		else if(num==1)
		{
			return 1;
		}
		else
		{
			fact=factorial(num-1)*num;
			return fact;
		}
	}
	else
	{
		printf("\n Enter a Valid Number");
	}
}
