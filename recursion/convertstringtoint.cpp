#include<iostream>
#include<cstring>
using namespace std;
int convert(char *a,int n)
{
	if(n==0)
	{
		return 0;
	}
	int digit=a[n-1]-'0';
	int smallans=convert(a,n-1);
	return smallans*10+digit;
}
int main() {
	char a[100];
	cin>>a;
	int n=strlen(a);
	int x=convert(a,n);
	cout<<x;
	return 0;
}