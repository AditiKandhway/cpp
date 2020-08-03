#include<iostream>
using namespace std;

int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=0;
	for(int i=1;i<n;i++)
	{
		x++;
		while(a[i]%k==0)
		{
			a[i]=a[i]+x;
			x++;
		}
	}
	for(int i=0;i<n;i++)
	{
		x++;
		if(a[i]%k!=0)
		{
			a[i]=a[i]+x;
		}
	}
	cout<<
}
