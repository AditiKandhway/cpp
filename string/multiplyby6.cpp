#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int c=0,flag=1;
		while(n>=1)
		{
			if(n%6==0)
			{
				n=n/6;
				c++;
			}
			else
			{
				n=n*2;
				if(n%6==0||n/6==1)
				{
					c++;
				}
				else
				{
                 flag=0;
				}
			}
		}
		if(flag==1)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}