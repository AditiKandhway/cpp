#include<iostream>
using namespace std;
void generate(char *a,char *b,int i,int j)
{
	if(a[i]=='\0')
	{
		b[j]='\0';
		cout<<b<<endl;
		return;
	}
	int digit=a[i]-'0';
	char ch=digit+'A'-1;
	b[j]=ch;
	generate(a,b,i+1,j+1);
	if(a[i]=='0')
	{
     generate(a,b,i+1,j);
	}
	if(a[i+1]!='\0')
	{
		int seconddigit=a[i+1]-'0';
		int num=digit*10+seconddigit;
		if(num<=26)
		{
			ch=num+'A'-1;
			b[j]=ch;
			generate(a,b,i+2,j+1);
		}
	}
	return;
	}
int main() {
	char a[100];
	cin>>a;
	char b[100];
	generate(a,b,0,0);
    
	return 0;
}