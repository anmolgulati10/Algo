#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[100000]={0};
	arr[0]=1;
	int n;
	cin>>n;
	int len=1;
	for(int i=2;i<=n;i++)
	{
		int x=0;
		int num=0;
		while(x<len)
		{
			arr[x]=arr[x]*i;
			arr[x]+=num;
			num=arr[x]/10;
			arr[x]=arr[x]%10;
			x++;
		}
		while(num!=0)
		{
			arr[len]=num%10;
			num=num/10;
			len++;
		}
	}
	//cout<<"hi"<<len<<endl;
	len=len-1;
	while(len>=0)
	{
		cout<<arr[len]<<"";
		len--;
	}
	return 0;
}