#include<iostream>
using namespace std;

int main()
{
	char str[10],*ptr;
	int i=0;
	
	ptr=&str[0];
	
	cout<<"\n Enter any String:";
	cin>>ptr;
	
	cout<<"\n Given string is-"<<ptr;
	
	ptr=&str[0];
	while(*ptr!=NULL)
	{
		i++;
		ptr++;
	}
	
	cout<<"\n Length of Strimg is"<<i;
	
	return 0;
}
