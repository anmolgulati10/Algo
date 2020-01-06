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

class list1
{
public:
	node* h;
	node* e;

	list1()
	{
		this->h=NULL;
		this->e=NULL;
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

list1 reverse(node* head,node* end)
{
	list1 l;
	end->next=NULL;
	if(head==NULL or head==end)
	{
		l.h=head;
		l.e=head;
		return l;
	}
	node* temp=head;
	l=reverse(head->next,end);
	(l.e)->next=temp;
	temp->next=NULL;
	l.e=temp;
	return l;
}

void kreverse(node* head,int k,int n)
{
	list1 l[(n/k)];
	for(int i=0;i<(n/k);i++)
	{
		int j=0;
		node* temp=head;
		//cout<<temp->data<<" check1"<<endl;;

		while(j<k-1)
		{
			//cout<<"loop"<<endl;
			temp=temp->next;
			j++;
		}
		//cout<<temp->next->data<<" check2"<<endl;

		node* end=temp->next;
		//temp->next=NULL;

		l[i]=reverse(head,temp);

		//cout<<end->data<<" check3"<<endl;

		while(l[i].h!=NULL)
		{
			cout<<(l[i].h)->data<<" ";
			l[i].h=l[i].h->next;
		}
		head=end;
		//cout<<"check4"<<endl;
	}
	return;
}

int main(int argc , char const *argv[])
{
	node* head=NULL;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		head=build(head,no);
	}
	kreverse(head,k,n);
	//display(head);
	return 0;
}