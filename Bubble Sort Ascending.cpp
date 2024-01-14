#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	
	//1.Accept
	printf("\n Enter any 5 Array elements:");
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//2.Display Unsorted Array
	printf("\n Array before Sorting");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	//3.Bubble Sort
	for(i=0;i<4;i++)//No of passes
	{
		for(j=0;j-1-i;j++)	//Comparing Each Elemenet
		{
			if (a[j]>a[j+1])//Swapping Each element
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
		    }	
		}
	
	}	
	
	//4.Display Sorted Array
	printf("\n Array After Sorting:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	getch();
}

