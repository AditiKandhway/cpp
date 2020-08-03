#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve()
{
    int n;
   	cin>>n;
    vector<int>a(n);
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   	}
   	sort(a.begin(),a.end());

    for(int k=1;k<=1024;k++)
    {
        vector<int>b;
    	for(int j=0;j<n;j++)
    	{
    		b.push_back(k^a[j]);
    	}
    	sort(b.begin(),b.end());
    	if(a==b)
    	{
    		cout<<k<<endl;
    		return;
    	}
    }
    cout<<"-1"<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	solve();
    }
   }
