#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,search=0,n=0,flag=0;
	
	//1.Accept Size
	printf("\n Enter the Size of Array:");
	scanf("%d",&n);
	
	//2.Accept
	printf("\n Accepting the Array Elements");
	for(i=0;i<n;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	
	//3.Display
	printf("\n Displaying Array Elements:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	//Linear Searching
	//Accepting Element to be Searched
	printf("\n Enter the Element to be Searched:");
	scanf("%d",&search);
	//Search
	for(i=0;i<n;i++)
	{
		if (search==a[i])
		{
			flag=1;
			printf("\n Element %d is fond at %d position",search,(i+1));
			break;
		}
	}
	//Element Not Found
	if(flag==0)
	{
		printf("\n Element Not Found");
	}
}
