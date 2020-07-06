#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		cin>>x>>y>>n;
		while(n)
		{
			if(n%x==y)
			{
				cout<<n<<endl;
				break;
			}
			n--;
		}
	}
}