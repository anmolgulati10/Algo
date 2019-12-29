#include<bits/stdc++.h>
using namespace std;

void parenthesis(char arr[],int n,int openbr,int closebr,int i)
{
	if(openbr==0 and closebr==0)
	{
		
		string s1="";
		for(int j=0;j<n;j++)
		{
			s1+=arr[j];
		}
		cout<<s1;
		cout<<endl;
		return;
	}
	if(openbr>closebr)
	{
		arr[i]='(';
		parenthesis(arr,n,openbr-1,closebr,i+1);
	}
	else
	{
		if(openbr>0)
		{
			arr[i]='(';
			parenthesis(arr,n,openbr-1,closebr,i+1);
		}
		arr[i]=')';
		parenthesis(arr,n,openbr,closebr-1,i+1);
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char arr[2*n];
	arr[0]='(';
	arr[2*n-1]=')';
	int openbr=n-1;
	int closebr=n-1;
	parenthesis(arr,2*n,openbr,closebr,1);
	return 0;
}