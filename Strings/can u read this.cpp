#include<iostream>
using namespace std;
int main() {
	string str;
    int i=0,j;
    getline(cin,str);
    while(str[i]!='\0')
    {
        j=i+1;
        while(str[j]>=97 and str[j]<=122)
        {
            j++;
        }
        for(int k=i;k<j;k++)
        {
            cout<<str[k];
        }
        cout<<endl;
        i=j;

    }
}