#include<stdio.h>
#include<conio.h>

//Function Declaration
void quicksort(int a[],int first,int last);
void display(int a[],int n);

void main()
{
	int a[10],i,n;
	
	//Size of Array
	printf("\n\n Enter the Size of Array:");
	scanf("%d",&n);
	//Accept
	printf("\n\n Enter the Elements of Array:");
	for(i=0;i<n;i++)
	{
		printf("\n\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	printf("\n\n Displaying Elements of Array");
	display(a,n);		//Function call
	
	quicksort(a,0,n-1);		//Function Call
	printf("\n\n Array After Sorting:");
	display(a,n);		//Function Call
	
	getch();
}
//Function Defination
//Function to Sort Array By Quick Sort
void quicksort(int a[],int first,int last)
{
	int pivot,up,down,temp;
	
	//Pivot Up Down all Sorts Index Number
	if(first<last)
	{
		pivot=first;
		up=first;
		down=last;
		
		while(up<down)
		{
			//Up Finds an Element Greater than Pivot
			while(a[up]<a[pivot]&&up<last)
			{
				up++;
			}
			//Down Finds an Element Smaller than Pivot
			while(a[down]>a[pivot])
			{
				down--;
			}
			//Swap Up and Down if Up and Down are Not Crossed
			if(up<down)
			{
				temp=a[up];
				a[up]=a[down];
				a[down]=temp;
			}
		}
		//As up and Down Crossed each Other Therfore Swap Up and Down
		temp=a[pivot];
		a[pivot]=a[down];
		a[down]=temp;
		
		//Sort List-1 - Recursion
		quicksort(a,first,down-1);
		
		//Sort List-2 - Recursion
		quicksort(a,down+1,last);
	}
}
//Function to Display Array
void display(int a[],int n)
{
	int i;
	printf("\n\n Displaying Values of Array:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
