#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	printf("\n Accepting Any 5 Elements of Array A");
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Any Number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
