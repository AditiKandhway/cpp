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
       node* head2=NULL;
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int a;
          cin>>a;
          insertattail(head,a);
      }
      for(int i=0;i<n/2;i++)
      {
      int result=getfirstnode(head);
      insertattail(head1,result);
      deletefirstnode(head);
      int result2=getfirstnode(head);
      insertattail(head2,result2);
      deletefirstnode(head);
      }
      if(n%2==1)
      {
      int result=getfirstnode(head);
      insertattail(head1,result);
      deletefirstnode(head);
      }
      print(head1);
      cout<<endl;
      print(head2);
}
