#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

string tr[10000]={};
int k=0;

void permutations(unordered_map<string,int> &mp,string str,string ans)
{
	if(str.length()==0)
	{
		if(!mp.count(ans))
		{
			tr[k]=ans;
			k++;
			mp[ans]=1;
		}
		return;
	}

	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		string ros=str.substr(0,i)+str.substr(i+1);
		permutations(mp,ros,ans+ch);
	}
	return;
}

int main(int argc, char const *argv[])
{
	unordered_map<string,int> mp;
	string str;
	cin>>str;
	permutations(mp,str,"");
	// int n= (::k);
	sort(tr,tr+k);
	for(int j=0;j<k;j++)
	{
		cout<<tr[j]<<endl;
	}
	return 0;
}