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
void insertAtTail(node*&head,int data){
	if(head==NULL){
		node* n=new node(data);
		head=n;
		return;
	}

	node* tail = head;

	while(tail->next!=NULL){
		tail = tail->next;
	}

	node* n = new node(data);

	tail->next = n;
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
int intersectionpoint(node* headbig,node* headsm,int d)
{
	node* fast=headbig;
	node* slow=headsm;

	for(int i=0;i<d;i++)
	{
		fast=fast->next;
	}
	while(fast!=NULL and fast->data!=slow->data)
	{
		fast=fast->next;
		slow=slow->next;
	}
	if(fast==NULL and slow==NULL)
	{
		return -1;
	}
	return fast->data;
}
int main() {
	int n1,n2;
	node* head1=NULL;
	node* head2=NULL;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		int x;
		cin>>x;
		insertAtTail(head1,x);
	}
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		int x;
		cin>>x;
		insertAtTail(head2,x);
	}
	// display(head1);
	// cout<<endl;
	// display(head2);
	if(n1>n2)
	{
		cout<<intersectionpoint(head1,head2,(n1-n2));
	}
	else
	{
		cout<<intersectionpoint(head2,head1,(n2-n1));
	}
}