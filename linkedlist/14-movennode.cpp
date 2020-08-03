#include <iostream>
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
}

int getfirstnode(node* head)
{
    int result;
    result=head->data;
    return result;

}
void deletefirstnode(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}
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
int main() {
      
      node* head=NULL;
      node* head1=NULL;
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int a;
          cin>>a;
          insertattail(head,a);
      }
      int n1;
      cin>>n1;
       for(int i=0;i<n1;i++)
      {
          int b;
          cin>>b;
          insertattail(head1,b);
      }
      int result=getfirstnode(head1);
      insertathead(head,result);
      print(head);
      cout<<endl;
      deletefirstnode(head1);
      print(head1);
      cout<<endl;
}
