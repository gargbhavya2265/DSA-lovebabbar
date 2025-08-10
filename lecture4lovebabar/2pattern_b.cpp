#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter the number of rows/columns"<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n+1-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}