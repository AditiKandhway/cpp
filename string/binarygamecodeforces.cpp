#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1'&&s[i+1]=='0'||s[i]=='0'&&s[i]=='1')
			{
             flag=1;
			}
			else if(s[i]=='1'&&s[i-2]=='0'||s[i]=='0'&&s[i-2]=='1')
			{
             flag=0;
			}
		}
		if(flag==1)
		{
			cout<<"DA"<<endl;
		}
		else
		{
			cout<<"NET"<<endl;
		}
	}
}