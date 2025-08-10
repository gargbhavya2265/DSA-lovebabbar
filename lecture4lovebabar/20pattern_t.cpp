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
        a=64+i;
        while(j<=i)
        {
            cout<<a<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}