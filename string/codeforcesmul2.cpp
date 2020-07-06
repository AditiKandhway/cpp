#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t,c=0;
	int n;
	cin>>t;
	int ct[t];
	for(int i=0;i<t;i++)
	{
		cin>>n;
		c=0;
		while(true)
		{
			if(n==1)
			break;
			
			if(n%6==0)
			{
				if(((n/6)*2)==1)
				{
					c=-1;
					break;
				}
				else
				n /=6;
			}
			else
			{
				if(((n*2)%6)!=0)
				{
					c=-1;
					break;
				}
				else
				{
					n *=2;
				}
			}
			c++;
		}
		ct[i]=c;
	}
	for(int i=0;i<t;i++)
	{
		cout<<ct[i]<<endl;
	}
	return 0;
}