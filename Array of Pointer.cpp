#include<iostream>
using namespace std;

int main()
{
	int a[5],*ptr,i;
	
	ptr=&a[0];
	
	cout<<"\n Accepting values of Array A";
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter any Number:";
		cin>>*ptr;
		ptr++;
	}
	ptr=&a[0];
	cout<<"\n Displaying values of Array A:";
	for(i=0;i<5;i++)
	{
		cout<<" "<<*ptr;
		ptr++;
	}
	return 0;
}
