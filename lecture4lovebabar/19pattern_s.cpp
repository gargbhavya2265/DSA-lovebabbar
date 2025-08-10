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
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i)
        {
            cout<<k;
            k++;
        }
        int a=1;
        int b=i-1;
        while(a<i)
        {
            cout<<b;
            b--;
            a++;
        }
        cout<<endl;
        i++;
    }
}