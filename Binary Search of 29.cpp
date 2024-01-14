#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8]={11,5,21,3,29,17,2,43};
	int i,j,temp=0,n,search=29;
	int first,last,mid;
	
	//Selection Sort
	for(i=0;i<8;i++)//Selecting Elemetn
	{
		for(j=i+1;j<8;j++)//Comparing Element
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
	for(i=0;i<8;i++)
	{
		printf(" %d ",a[i]);
	}
	//Binary Search
	first=0;
	last=7;
	mid=(first+last)/2;
	
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
