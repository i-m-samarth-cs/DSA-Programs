#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,search=0,flag=0;
	
	//Accept
	printf("\n\n Enter any 5 elements of array:");
	for(i=0;i<5;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//Display
	printf("\n\n Displaying Elements of Array:");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	//Linear Searching
	//Accept Search
	printf("\n Enter the Element to be Search:");
	scanf("%d",&search);
	//Search
	for(i=0;i<5;i++)
	{
		if(search==a[i])
		{
			flag=1;
			printf("\n Element %d is Found at Position %d",search,(i+1));
			break;
		}
	}
	//Element Not Found 
	if(flag==0)
	{
		printf("\n Element is Not Found");
	}
	return 0;
}
