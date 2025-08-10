#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n,count=0;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        int rem=n%2;
         ans=rem*pow(10,i)+ans;
        n=n/2;
        i++;
    }
    cout<<ans<<endl;
}