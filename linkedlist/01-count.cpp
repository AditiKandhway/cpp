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
	node* temp=head;
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new node(data);
	return;
}
int count(node* head)
{
	int c=0;
	node* temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
int main()
{
	node* head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		insertattail(head,a);
	}
	cout<<count(head);
}