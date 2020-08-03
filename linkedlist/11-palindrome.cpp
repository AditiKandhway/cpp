#include<iostream>
#include<stack>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node (int d)
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
bool palindrome(node* head)
{
	stack<int>s;
	node* temp=head;
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp=temp->next;
	}
	while(head!=NULL)
	{
		int i=s.top();
		s.pop();
		if(head->data!=i)
		{
			return false;
		}
		head=head->next;
	}
	return true;
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
	if(palindrome(head))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}