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
void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main() {
	node* head1=NULL;
	node* head2=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a%2==1)
		{
			insertattail(head1,a);
		}
		else
		{
			insertattail(head2,a);
		}
	}
	print(head1);
//	cout<<endl;
	print(head2);
	return 0;
}