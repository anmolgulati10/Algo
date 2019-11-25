#include<iostream>
using namespace std;
int main() {
	int sum=0;
	string num1,num2;
    int j,test,i;
	char x,y;
	cin>>test;
    for(i=0;i<test;i++)
    {   
        j=0;
		int l=0;
        cin>>num1>>num2;
        while(num1[j]!='\0')
        {
            j++;
        }
        int n=j;
        int a[n];
        j=0;
        while(num1[j]!='\0')
        {	
			x=num1[j];
			y=num2[j];
            if(x==y)
            {
                a[j]=0;
            }
            else
            {
                a[j]=1;
            }
            j++;
        }
        for(int k=0;k<n;k++)
        {
            cout<<a[k];
        }
        cout<<endl;
    }
}