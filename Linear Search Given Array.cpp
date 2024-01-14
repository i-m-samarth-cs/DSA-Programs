#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7]={10,5,20,25,8,30,40};
	int i,search=30,flag=0;
	
	//3.Display
	printf("\n Displaying Array Elements:");
	for(i=0;i<7;i++)
	{
		printf(" %d ",a[i]);
	}
	//Linear Searching
	//Search
	for(i=0;i<7;i++)
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
