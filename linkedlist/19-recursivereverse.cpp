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
node* reverserec(node* head)
{
	if(head->next==NULL || head==NULL)
	{
		return head;
	}
	node* smallhead=reverserec(head->next);
	node* c=head;
	c->next->next=c;
	c->next=NULL;
	return smallhead;

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
		node* newhead=reverserec(head);
	    print(newhead);
	return 0;
}
