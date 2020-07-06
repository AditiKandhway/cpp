#include<bits/stdc++.h>
using namespace std;
int a[1000000];
bool issorted(int *a,int n)
{
	if(n==1)
	{
		return true;
	}
	if(a[0]<=a[1] and issorted(a+1,n-1))
	{
		return true;
	}
	return false;
}
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(issorted(a,n))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}