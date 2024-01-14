#include<stdio.h>
#include<conio.h>

void main()
{
	int a[6]={8,20,15,3,25,30};
	int i,j,temp;
	//Display unsorted array
	printf("\n Array Before Sorting:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	//Bubble sort
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//4.Display Sorted Array
	printf("\n Array After Sorting:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
    getch();
}
