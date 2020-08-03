#include<iostream>
using namespace std;

int greatest(int a[])
{
	int m=0;
	for(int i=0;i<3;i++)
	{
	if(a[i]>=m)
	{
		m=last_bit;
	}
}
	return m;
}
int smallest(int a[])
{
	int n=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]<=n)
		{
			n=a[i];
		}
	}
	return n;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[3];
		vector<int>v;
		for(int i=0;i<n;i++)
		{
         int last_bit=n%10;
         a[i]=last_bit;
          n=n/10;
		}
		int m=greatest(a);
        int n1=smallest(a);
        	int a=m*11+n1*7;
        	int c=0;
        	int a1=a;
             a=a%100;
        	v.push_back(a);
	}
	for(int i=0;i<n;i+=2)
	{
	 for(j=i;j<n;j+=2)
      {
      	int x=v[i];
      	int y=v[j];
      	x=x/10;
      	y=y/10;
      	if(x==y)
      	{
      		c1++;
      	}
      }
	}
	if(c1>=3)
	{
		c1=2;
	}
	for(int i=1;i<n;i+=2)
	{
	 for(j=i;j<n;j+=2)
      {
      	int x=v[i];
      	int y=v[j];
      	x=x/10;
      	y=y/10;
      	if(x==y)
      	{
      		c2++;
      	}
      }
	}
	if(c2>=3)
	{
		c2=2;
	}
	cout<<c1+c2<<endl;
}