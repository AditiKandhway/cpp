#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
void generate(char *a,char *b,int i,int j)
{
	int c=0;
	if(a[i]=='\0')
	{
		b[j]='\0';
		cout<<b<<" ";
	return;
	}
    generate(a,b,i+1,j); 
	b[j]=a[i];
    generate(a,b,i+1,j+1);
}
int main() {
	char c[100];
	cin>>c;
	int l=strlen(c);
	char d[100];
	generate(c,d,0,0);
	cout<<endl<<pow(2,l);
	sort(d,d+l);
	return 0;
}