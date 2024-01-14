#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,j,temp=0,n,search=0;
	int first,last,mid;
	
	//Accept Array Size
	printf("\n Enter the Size of Array:");
	scanf("%d",&n);
	//Accept Array Elements
	printf("\n Enter %d Elements of Array",n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter any Element:");
		scanf("%d",&a[i]);
	}
	//Selection Sort
	for(i=0;i<n;i++)//Selecting Elemetn
	{
		for(j=i+1;j<n;j++)//Comparing Element
		{
			if(a[i]>a[j])//Swapping if Selected value is greater than compared value
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//Display Elements
	printf("\n Displaying Elements After Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	//Binary Search
	first=0;
	last=n-1;
	mid=(first+last)/2;
	
	printf("\n Enter the Element to be Searched:");
	scanf("%d",&search);
	
	while(first<=last)
	{
		if(search<a[mid])
		{
			last=mid-1;
		}
		else if(search>a[mid])
		{
			first=mid+1;
		}
		else
		{
			printf("\n Element %d is found at %d Position",search,(mid+1));
			break;
		}
		mid=(first+last)/2;
	}
	if(first>last)
	{
		printf("\n Element Not Found");
	}
	
	getch();
}
