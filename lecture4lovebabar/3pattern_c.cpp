#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
      int a=1;
    cout<<"Enter the number of rows/columns"<<endl;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<a<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}