#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[100];
		cin>>a;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='('&&a[i+1]!=')')
			{
				while(a[j]=='\0')
				{
					j++;
				}
				while(j>=i)
				{
					a[j+1]=a[i];
				}
				if(a[i+1]=='(')
				{
					a[i]==')';
				}
				else if(a[i+1]==')')
				{
					a[i]='(';
				}

			}
		}

	}
}