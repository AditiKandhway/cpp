#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertattail(node* &head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node* tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next=new node(data);
	return;
}
void buildlist(node* &head)
{
	int n;
	cin>>n;
	int data;
	while(n!=0)
	{
        cin>>data;
		insertattail(head,data);
		n--;
	}
}
void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
istream& operator>>(istream &is,node* &head)
{
	buildlist(head);
	return is;
}
ostream& operator<<(ostream &os,node* head)
{
	print(head);
	return os;
}
node* merge(node* a,node* b)
{
	if(a==NULL)
	{
		return b;
	}
	else if(b==NULL)
	{
		return a;
	}
	node* c;
	if(a->data<b->data)
	{
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 node* head1=NULL;
	 node* head2=NULL;
     cin>>head1>>head2;
   //  cout<<head1<<head2;
     head1=merge(head1,head2);
     cout<<head1;
     cout<<endl;
}
return 0;
}