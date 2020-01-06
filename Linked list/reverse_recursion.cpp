#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

node* build(node* &head,int data)
{
	if(head==NULL)
	{
		node* temp=new node(data);
		head=temp;
		return head;
	}

	node* temp=new node(data);
	node* temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
	return head;
}

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return;
}

node* reverse(node* &head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	node* temp=head;
	node* newhead=reverse(head->next);
	temp->next->next=temp;
	temp->next=NULL;
	return newhead;
}

int main(int argc , char const *argv[])
{
	node* head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		head=build(head,no);
	}
	display(head);
	cout<<endl;
	head=reverse(head);
	display(head);
	return 0;
}