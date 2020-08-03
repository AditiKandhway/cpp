#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
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
node* kappend(node* &head,int k)
{
	node* slow=head;
	node* fast=head;
	node* oldhead=head;
	for(long i=0;i < k && fast->next!=NULL ;i++){
        fast = fast->next;
    }
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
	}
	node* newhead=slow->next;
	slow->next=NULL;
	fast->next=oldhead;
	return newhead;
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
	node* head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		insertattail(head,a);
	}
	int k;
	cin>>k;
     k=k%n;
     if(k==0)
     {
         print(head);
     }
	node* newhead=kappend(head,k);
	print(newhead);
	return 0;
}