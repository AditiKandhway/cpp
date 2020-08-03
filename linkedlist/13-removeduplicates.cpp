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

void removeduplicates(node* &head)
{
    node* current=head->next;
    if(current==NULL)
    {
        return;
    }
    while(current->next!=NULL)
    {
       if(current->data==current->next->data)
       {
           node* n=current->next->next;
           delete(current->next);
           current->next=n;
       }
       current=current->next;
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
      removeduplicates(head);
      print(head);
      cout<<endl;
}
