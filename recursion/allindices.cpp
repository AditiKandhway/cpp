#include<iostream>
using namespace std;
void allocc(int a[],int n,int i,int key)
{
	if(i==n)
	{
		return;
	}
	if(a[i]==key)
	{
		cout<<i<<" ";
	}
	allocc(a,n,i+1,key);
}
int main() {
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	allocc(a,n,0,key);
	return 0;
}