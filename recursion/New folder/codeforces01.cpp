#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==b||b==c||c==a)
		{

          cout<<"YES"<<endl;
          cout<<a<<" "<<b<<" "<<"1"<<" "<<endl;
		}
		else if(a==b==c)
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<" "<<endl;
		}
		else if(a<b||b<c||c<a)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}