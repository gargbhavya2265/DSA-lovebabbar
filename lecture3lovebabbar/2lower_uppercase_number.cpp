#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z')
    {
        cout<<ch<<" is lowercase"<<endl;
    }
    else if( ch>='A' && ch <='Z')
    {
        cout<<ch<<" is uppercase"<<endl;
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<ch<<" is a number";
    }
    else{
        cout<<"NOT A VALID INPUT";
    }
}