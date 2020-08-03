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

void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
      cout<<temp->data<<" ";
      temp=temp->next;
	}
}

void deletelist(node* head)
{
    node* current=head;
    node* temp;
    while(current!=NULL)
    {
        temp=current->next;
        delete(current);
        current=temp;
    }
    head=NULL;
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
    print(head);
	deletelist(head);
    print(head);
}