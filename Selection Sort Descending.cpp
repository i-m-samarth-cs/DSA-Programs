#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,j,temp;
	
	//Accept
	printf("\n Accepting Elemnts of Array");
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//Display
	printf("\n Array Before Sorting:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	//Selection Sort
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//Display Array
	printf("\n Array After Sorting:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	
	getch();
}
