#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n,t;
    cout<<"enter the term you upto you want to print the series"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        t=a+b;
        a=b;
        b=t;
    }
}