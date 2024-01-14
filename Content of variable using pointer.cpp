#include<iostream>
using namespace std;
int main()
{
	int x=100;
	int *y;
	
	y=&x;
	
	cout<<"\n Content of x is"<<*y;
	
	return 0;
}
