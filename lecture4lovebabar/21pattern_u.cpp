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
       
        while(j<=n+1-i)
        {
            cout<<j;
            j++;
        }
        int k=1;
        while(k<i)
        {
            cout<<"**";
            k++;
        }
        int a=1;
        int b=n-i+1;
        while(a<=n+1-i)
        {
            cout<<b;
            b--;
            a++;
        }
        cout<<endl;
        i++;
    }
}