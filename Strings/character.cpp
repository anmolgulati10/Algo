#include<iostream>
using namespace std;
char answer(char ch)
{
    if(ch>=65 and ch<=90)
    {
        return 'U';
    }
    else if(ch>=97 and ch<=122)
    {
        return 'L';
    }
    else
    {
        return 'I';
    }
}
int main() {
	char ch,x;
    ch=cin.get();
    x=answer(ch);
    cout<<x;
}