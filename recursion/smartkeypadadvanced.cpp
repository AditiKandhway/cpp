#include<bits/stdc++.h>
using namespace std;
char keypad[][10]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
vector<string> searchIn = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
void generate(char *a,char *b,int i,int j)
{
	if(a[i]=='\0')
	{
		for(string s:searchIn)
		{
			if(s.find(b)!=s.npos)
			{
		     cout<<s<<endl;
			}
		}
		return;
	}
    int digit=a[i]-'0';
	for(int k=0;keypad[digit][k]!='\0';k++)
	{
		b[j]=keypad[digit][k];
		generate(a,b,i+1,j+1);
	}
}
	int main() {
		char a[100];
		cin>>a;
		char b[100];
		generate(a,b,0,0);
	return 0;
}