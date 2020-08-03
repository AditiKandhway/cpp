#include <iostream>
#include<stack>
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
node* reverse(node* head,int k)
{
    stack<node*>s;
    node* current=head;
    node* prev=NULL;

    while(current!=NULL)
    {
        int count=0;
        while(current!=NULL && count<k)
        {
            s.push(current);
            current=current->next;
            count++;
        }
        while(s.size()>0)
        {
        if(prev==NULL)
        {
            prev=s.top();
            head=prev;
            s.pop();
        }
        else
        {
            prev->next=s.top();
            prev=prev->next;
            s.pop();
        }
    }
}
prev->next=NULL;

return head;
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

int main()
{
    node* head=NULL;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        insertattail(head,a);
    }
    node*newhead= reverse(head,k);
    print(newhead);
}