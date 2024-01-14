#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],n,i,j,temp;
	
	//Accpet Size of Array
	printf("\n Enter Size of Array:");
	scanf("%d",&n);
	//Accept
	printf("\n Accepting Elemnts of Array");
	for(i=0;i<n;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	//Display
	printf("\n Array Before Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	//Selection Sort
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//Display Array
	printf("\n Array After Sorting:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	getch();
}
