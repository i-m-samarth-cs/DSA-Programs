#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6];
	int i,n,j,k,temp;
	printf("\n Enter the value of n");
	scanf("%d",&n);
	//accepting elemnts of array
	for(i=0;i<n;i++)
	{
		printf("\n Enter any number:");
        scanf("%d",&a[i]);
	}
	//Displaying Array Elements
	printf("\n Array Before Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)//Comparing Each Element
		{
			if(a[i]<a[j])//Inserting Element if Value is smaller
			{
				temp=a[i];//Storing Selected value
			for(k=i;k>j;k--)
			{
				a[k]=a[k-1];
			}
			a[j]=temp;//Insering at proper position
		    }
		}
	}
	//Displaying Sorted Array

	printf("\n Array After Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	getch();
}