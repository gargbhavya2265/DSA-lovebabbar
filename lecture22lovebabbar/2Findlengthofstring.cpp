#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter a string"<<endl;
    cin>>str;

    int length=0;
    int i=0;
    while(str[i]!=0)
    {
        length++;
        i++;
    }
    cout<<"Length of string is:"<<length<<endl;
}