#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;

	node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
void insertattail(node*&head,int data)
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
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int kthelement(node* head,int k)
{
	node* fast=head;
	node* slow=head;
	for(int i=0;i<k;i++)
	{
		fast=fast->next;
	}
	while(fast!=NULL)
	{
		slow=slow->next;
		fast=fast->next;
	}
	return slow->data;
}
int main() {
	
	node* head=NULL;
	while(true)
	{
		int n;
		cin>>n;
		if(n==-1)
		{
			break;
		}
		insertattail(head,n);
	}
	int k;
	cin>>k;
	// display(head);
	// cout<<endl;
	cout<<kthelement(head,k);
}