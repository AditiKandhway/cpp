#include<iostream>
#include<climits>
using namespace std;

int maxi(int a[],int n)
{
	int largest=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
	}
	return largest;
}
int main() {
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
     cin>>a[i];
	}
	cout<<maxi(a,n)<<endl;
	return 0;
}