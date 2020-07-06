#include<iostream>
#include<cstring>
using namespace std;
void duplicates(char s[],int i)
{
	int l=strlen(s);
	if(s[i+1]=='\0')
	{
		return;
	}
		if(s[i]==s[i+1])
		{
			int j=i+1;
			while(s[j]!='\0')
			{
				j++;
			}
			while(j>=i+1)
			{
				s[j+1]=s[j];
				j--;
			}
			s[i+1]='*';
			duplicates(s,i+2);
		}
		else
		{
			duplicates(s,i+1);
		}	
	return;
}
int main() {
	char s[10000];
	cin>>s;
    duplicates(s,0);
	cout<<s<<endl;
	return 0;
}