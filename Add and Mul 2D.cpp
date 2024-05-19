#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3];
	a=[[1,2,3],[4,5,6],[7,8,9]];
	b=[[9,8,7],[6,5,4],[3,2,1]];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]*b[i][j];
		}
	}
	
	cout<<"\n SUM ->"c[i][j];
	cout<<"\n Product ->"d[i][j];
	
	
}
