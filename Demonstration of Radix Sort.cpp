#include<stdio.h>
#include<conio.h>
//Function Declaration
void display(int a[],int n);
int passes(int a[],int n);
void radixsort(int a[],int n);

int main()
{
	int a[10],n,i;
	
	//1.Accept Size
	printf("\n Enter the Size of Array:");
	scanf("%d",&n);
	
	//2.Accept Elements
	printf("\n Enter %d values of Array:",n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter any Number:");
		scanf("%d",&a[i]);
	}
	
	//3.Display
	printf("\n Array Before Sorting:");
	display(a,n);
	
	//4.Radixsort
	radixsort(a,n);
	
	//5.Display
	printf("\n Array After Sorting:");
	display(a,n);	//Function Call
	
	getch();
}
//Function Defination
//1.Function to Display Array
void display(int a[],int n)
{
	int i;
	
	printf("\n Displaying Elements of Array:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
//Function to find No of Passes
int passes(int a[],int n)
{
	int large=0,count=0,i;
	
	large=a[0];
	//To Find Largest Number
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
	}
	//To Count Number of Digits
	while(large>0)
	{
		large=large/10;
		count++;
	}
	return count;		//Return No of Digits of Largest Number
}
//Function to Sort the Array
void radixsort(int a[],int n)
{
	int bucket[10][10],b[10];
	int i,j,k,num,pass=0,div=1,countdigit=0;
	
	//No of Passes
	for(pass=0;pass<countdigit;pass++)
	{
		//Initialize all elements of Array 'B' by 0
		for(i=0;i<10;i++)
		{
			b[i]=0;
		}
		//Placing Elements in Respective Buckets i.e In 2D Array Elements Bucket[][]
		for(i=0;i<n;i++)
		{
			//Getting Bucket No=>Row No
			num=(a[i]/div%10);		//1-Pass-Units, 2-pass-Tens  , 3-Pass-Hundreds
			
			//Placing Element in Respective Bucket
			bucket[num];b[num]=a[i];
			
			//Counting No of Elements in Respective Bucket
			b[num]++;
		}
		//For Unit-1 Tens-10 Hundreds-100
		div=div*10;
		
		i=0;
		
		//Gather all Elements from buckets and merge them into single array again
		for(j=0;j<10;j++)
		{
			for(k=0;k<b[j];k++)
			{
				a[i]=bucket[j][k];
				i++;
			}
		}
	}
}
