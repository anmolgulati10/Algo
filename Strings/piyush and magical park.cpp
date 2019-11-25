#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
    cin>>n>>m>>k>>s;
    string str[n+1];
    int i;
    for(i=0;i<=n;i++)
    {
        getline(cin,str[i]);
    }
    for(i=1;i<=n;i++)
    {
        str[i-1]=str[i];
    }
    for(i=0;i<n;i++)
    {
        int j=0;
        char x;
        while(str[i][j]!='\0' and s>0)
        {   
            x=str[i][j];
            if(x=='.')
            {
                s=s-2;
            }
            else if(x=='*')
            {
                s=s+5;
            }
            else if(x=='#')
            {
                break;
            }
            else if(x==' ')
            {
                s--;
            }
            if(j==(m+m-2))
            {
                s=s;
            }
            j++;
        }
    }
    if(s>=k)
    {   
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}