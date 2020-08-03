#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum=0,sum1=0,c=0,flag=1;
	int t,a,b;
	for(int i=0;i<n;i++)
	{
	    cin>>t>>a>>b;
	   if(c==2*k)
		{
			break;
		}
	else if(a==1)
	{
		sum+=t;
		c++;
	}
	else if(b==1)
	{
		sum1+=t;
		c++;
	}
	else if((2*k)>n)
	{
		flag=0;
	}
}
if(flag==1)
{
    cout<<sum+sum1;
}
else
{
	cout<<-1;
}
}