#include<iostream>
using namespace std;

void duplicate(int a[],int n)
{
	if(2*n==0||2*n==1)
	{
	return;
	}
	int prev=0;
	for(int current=1;current<2*n;current++)
	{
	if(a[current]!=a[prev])
	{
	prev++;
	a[prev]=a[current];
	}
	}
	return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
	int a[1000];
	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
	}
	duplicate(a,n);
    for(int i=0;i<n;i++)
    {
	cout<<a[i]<<endl;
	}
}
	return 0;
}