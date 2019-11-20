#include<iostream>
using namespace std;
int main() {
	char ch;
    int num1,num2;
    while(1)
    {
        cin>>ch;
        if(ch=='*')
        {
            cin>>num1>>num2;
            cout<<(num1*num2)<<endl;
        }
        else if(ch=='-')
        {
            cin>>num1>>num2;
            cout<<(num1-num2)<<endl;
        }
        else if(ch=='/')
        {
            cin>>num1>>num2;
            cout<<(num1/num2)<<endl;
        }
        else if(ch=='%')
        {
            cin>>num1>>num2;
            cout<<(num1%num2)<<endl;
        }
        else if(ch=='+')
        {
            cin>>num1>>num2;
            cout<<(num1+num2)<<endl;
        }
        else if(ch=='x' or ch=='X')
        {
            break;
        }
        else
        {
            cout<<"Invalid operation. Try again."<<endl;
        }

    }
    return 0;
}