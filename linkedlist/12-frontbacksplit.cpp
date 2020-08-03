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

node* frontbacksplit(node* head)
{
    node* fast=head->next;
    node*slow=head;
    node* newhead=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    newhead=slow->next;
    slow->next=NULL;
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
      print(head);
      cout<<endl;
      node* newhead=frontbacksplit(head);
      print(head);
      cout<<endl;
      print(newhead);
}
