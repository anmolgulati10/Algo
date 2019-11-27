#include<iostream>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	string str[n];
	for(i=0;i<n;i++)
	{
		cin>>str[i];
	}
	
	
	string temp;
	while(1)
	{
		bool is_swap=false;
		for(i=0;i<n-1;i++)
		{
			if(str[i]>str[i+1])
			{
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
				is_swap=true;
			}
		}
		if(is_swap==false)
		{
			break;
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		if(str[i][0]==str[i+1][0])
		{
			if(str[i+1].substr(0,str[i].length())==str[i])
			{
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
	
	
}