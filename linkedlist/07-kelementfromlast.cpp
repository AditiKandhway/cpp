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
	int data;
	cin>>data;
	while(data!=-1)
	{
		insertattail(head,data);
			cin>>data;
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
node* kthnode(node* head,int k)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* slow=head;
    node* fast=head;
    while(k!=0)
    {
        fast=fast->next;
        k--;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
int main() {
	node* head=NULL;
	cin>>head;
	int k;
	cin>>k;
    node* temp=kthnode(head,k);
	cout<<temp->data;
	return 0;
}