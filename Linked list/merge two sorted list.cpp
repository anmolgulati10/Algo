#include<iostream>
using namespace std;
class node
{
    public:
    long long int data;
    node* next;
    node(long long int data)
    {
        this->data=data;
        next=NULL;
    }
};
void insertattail(node* &head,long long int data)
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
void merge(node* head1,node* head2,node* &head3)
{
    if(head1==NULL)
	{
		head3=head2;
		return;
	}
	if(head2==NULL)
	{
		head3=head1;
		return;
	}
	node* temp1=head1;
    node* temp2=head2;
    if(temp1->data<temp2->data)
    {
        head3=temp1;
        temp1=temp1->next;
    }
    else
    {
        head3=temp2;
        temp2=temp2->next;
    }
    node* temp3=head3;
    while(temp1!=NULL and temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            temp3->next=temp1;
            temp1=temp1->next;
        }
        else
        {
            temp3->next=temp2;
            temp2=temp2->next;
        }
        temp3=temp3->next;
    }
    while(temp1!=NULL)
    {
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=NULL)
    {
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }

}

int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        node* head1=NULL;
    	node* head2=NULL;
    	node* head3=NULL;
		int n1,n2;
        cin>>n1;
        for(int j=0;j<n1;j++)
        {
            long long int x;
            cin>>x;
            insertattail(head1,x); 
        }
        cin>>n2;
        for(int j=0;j<n2;j++)
        {
            long long int x;
            cin>>x;
            insertattail(head2,x); 
        }
        // display(head1);
        // cout<<endl;
        // display(head2);
        merge(head1,head2,head3);
        display(head3);
        cout<<endl;
    }
}