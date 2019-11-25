#include<iostream>
using namespace std;
int main() {
	string str;
    getline(cin,str);
    int i;
    i=1;
    cout<<str[i-1];
    while(str[i]!='\0')
    {
        cout<<(str[i]-str[i-1])<<str[i];
        i++;
    }
}