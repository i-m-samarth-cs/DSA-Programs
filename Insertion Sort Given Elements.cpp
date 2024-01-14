#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6]={8,20,15,3,25,30};
	int i,j,k,temp;
	//Display Unsorted Array
	printf("\n Array Before Sorting:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	//Insertion sort
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				for(k=i;k>j;k--)
				{
					a[k]=a[k-1];
				}
				a[j]=temp;
			}
			
		}
	}
	//Display Sorted Array
	printf("\n Displaying Sorted Array:");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	getch();
}
