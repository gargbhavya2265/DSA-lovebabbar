#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char a;
    cout<<"Enter the number of rows/columns"<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        int k=1;
        while(j<i)
        {
            cout<<"&";
            j++;
        }
        while(k<=n+1-i)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}