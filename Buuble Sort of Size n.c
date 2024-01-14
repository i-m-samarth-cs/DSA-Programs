#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],n;
	int i,j,temp;
	//Accpet Size of Array
	printf("\n Enter Value of n");
	scanf("%d",&n);
	
	//accpet Array
	printf("\n Enter %d Elements of array:",n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//Display unsorted array
	printf("\n Array Before Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	//Bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
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
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
    getch();
}
