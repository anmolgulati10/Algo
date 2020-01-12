#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void insertattail(node* &head,int data)
{
    if(head==NULL)
    {
        node* n=new node(data);
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* n=new node(data);
    temp->next=n;
}
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int count(node* head)
{
    int c=0;
    node* temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
void appendk(node* &head,int k,int n)
{
    if(k==0 or k==n)
    {
        //display(head);
        return;
    }
    k=k%n;
    node* temp=head;
    for(int i=0;i<(n-k-1);i++)
    {
        temp=temp->next;
    }
    node* p=temp->next;
    temp->next=NULL;
    node* temp2=p;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=head;
    head=p;
}

int main()
{
    int n,k;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insertattail(head,x);
    }
    cin>>k;
    //int c=count(head);
    appendk(head,k,n);
    display(head);
}