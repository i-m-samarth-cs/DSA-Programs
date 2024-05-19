#include<iostream>
using namespace std;

int main()
{
	int a[3][3][3];
	int i,j,k;
	cout<<"\n Accepting Elements ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"\n Displaying Elements ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<"\t"<<a[i][j][k];
			}
			cout<<"\n ";
		}
		cout<<"\n ";
	}
	return 0;
	
}
