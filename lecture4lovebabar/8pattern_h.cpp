#include<iostream>
using namespace std;
int main()
{
    int n,i=1,a;
    cout<<"Enter the number of rows/columns"<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        a=i;
        while(j<=i)
        {
            cout<<a<<" ";
            j++;
            a--;
        }
        cout<<endl;
        i++;
    }
}