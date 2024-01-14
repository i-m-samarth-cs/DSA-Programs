#include<iostream>
using namespace std;

int main()
{
	char str[10],*ptr;
	int i=0,count=0;
	
	ptr=str;
	
	cout<<"\n Enter any String:";
	cin>>ptr;
	
	cout<<"\n Given string is-"<<ptr;
	ptr=str;

	while(*ptr!=NULL)
	{
		if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
		{
			count++;
		}
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
		{
			count++;
		}
		else
		{
			
		}
		ptr++;
	}
	cout<<"\n No of Vowels are:"<<count;
	
	return 0;
	
	cout<<"\n Length of Strimg is"<<i;
	
	return 0;
}
