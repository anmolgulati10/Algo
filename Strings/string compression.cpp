#include<iostream>
using namespace std;
int main() {
	string str;
    int i=0,j,x;
    getline(cin,str);
    while(str[i]!='\0')
    {
        x=0;
        j=i;
        while(str[j]==str[i])
        {
            x++;
            j++;
        }
        cout<<str[i]<<x;
        i=j;
    }
}