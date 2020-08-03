#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char s1[1000];
	cin>>s1;
	char s2[1000];
	cin>>s2;
	int br=0,gr=0,bm=0,gm=0,count=0;
	for(int i=0;i<n;i++)
	{
		if(s1[i]=='r')
		{
			br++;
		}
		else
		{
			bm++;
		}
		if(s2[i]=='r')
		{
			gr++;
		}
		else
		{
			gm++;
		}
	}
	for(int i=0;i<n;i++)
	{
     if(s1[i]=='r')
     {
     	if(gr>0)
     	{
       gr--;
       count+=1;
     }
     else
     {
     	break;
     }
 }
     else
     {
      if(gm>0)
      {
      	gm--;
      	count+=1;
      }
      else
      {
      	break;
      }
     }
	}
	cout<<(n-count)<<endl;
}