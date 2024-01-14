#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6]={8,20,18,3,25,30};
	int i,j,temp;
	
	
	//Display
	printf("\n Array Before Sorting:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	//Selection Sort
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//Display Array
	printf("\n Array After Sorting:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	
	getch();
}
