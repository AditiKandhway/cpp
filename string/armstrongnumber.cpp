#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,c=0;
	cin>>n;
    int temp=n;
	while(temp)
	{
		c++;
		temp=temp/10;
	}
	int temp1=n;
	int rem;
	int sum=0;
	while(temp1)
	{
      rem=temp1%10;
	  sum+=pow(rem,c);
	  temp1=temp1/10;
	}
	if(sum==n)
	{
		cout<<"armstrong number";
	}
	else
	{
		cout<<"not";
	}
	return 0;
}