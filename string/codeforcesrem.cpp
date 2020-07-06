#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int t,x,y,n,j;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		cin>>x>>y>>n;
		j=n/x;
		for(int i=j;i>=0;i--)
		{
			if ((i*x +y)<=n)
			{
				cout<<i*x +y<<endl;
				break;
			}
		}
	}
	return 0;
}