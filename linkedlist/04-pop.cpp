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

void insertathead(node* &head,int data)
{
	node* n=new node(data);
	n->next=head;
	head=n;
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

int pop(node* head)
{
    node* temp=head;
    head=head->next;
    int result=temp->data;
    delete(temp);
   return result;
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
		insertathead(head,a);
	}
    print(head);
   // print(head);
  cout<<endl<<pop(head)<<endl;

}