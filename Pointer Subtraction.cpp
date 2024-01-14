#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int *ptr=&x;
	
	cout<<"\n Memory Address Before Subtractiom"<<ptr;
	
	ptr=ptr-2;
	cout<<"\n Memory Address Before Subtraction"<<ptr;
	
	return 0;
	
}
