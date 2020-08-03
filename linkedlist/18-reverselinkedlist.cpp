#include<iostream>
using namespace std;
class node{
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
void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
void reverse(node* &head)
{
	node* c=head;
	node* p=NULL;
	node* n1;
	while(c!=NULL)
	{
		n1=c->next;
		c->next=p;
		p=c;
		c=n1;
	}
	head=p;

}
int main() {
	node* head=NULL;
	int n;
	cin>>n;
    for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		insertattail(head,a);
	}
		reverse(head);
	    print(head);
	return 0;
}
