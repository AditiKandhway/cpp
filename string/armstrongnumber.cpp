#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long n,c=0;
	cin>>n;
    long long temp=n;
	while(temp)
	{
		c++;
		temp=temp/10;
	}
	long long temp1=n;
	int rem;
	long long sum=0;
	while(temp1)
	{
      rem=temp1%10;
	  sum+=pow(rem,c);
	  temp1=temp1/10;
	}
	if(sum==n)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}