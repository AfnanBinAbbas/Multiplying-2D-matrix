#include <iostream>
using namespace std;
int main()

{	int n;
		
		cout<<"enter the size of first array: ";
		cin>>n;
		cout<<"enter the size of second array: ";
		cin>>n;
		int a1[n][n];
		int a2[n][n];
		int a3[n][n];
		
	for(int i=0; i<n; i++)
	{	
		for(int j=0; j<n; j++)
		{
			cin>>a1[i][j];
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a1[i][j]<<",	";
		}
		cout<<endl;
	}
		cout<<endl;
	for(int i=0; i<n; i++)
	{	
		for(int j=0; j<n; j++)
		{
			cin>>a2[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a2[i][j]<<",	";
		}
		cout<<endl;
	}
	cout<<endl;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
		a3[i][j]=0;
			for(int k=0 ; k<n ; k++)
			{

					a3[i][j] += a1[i][k] * a2[k][j];
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a3[i][j]<<",	";
		}
			cout<<endl;
	}
		return 0;

}