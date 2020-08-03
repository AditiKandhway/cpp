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

node* merge(node* a,node* b)
{
    if(a==NULL)
    {
        return b;
    }
    else if(b==NULL)
    {
        return a;
    }
    node* c;
    c=a;
    merge(a->next,b);
    c=b;
    merge(a,b->next);

    return c;
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
      merge(head);
      print(head);