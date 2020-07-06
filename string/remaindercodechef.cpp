#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		long long n;
		cin>>n;
		while(n>=0)
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