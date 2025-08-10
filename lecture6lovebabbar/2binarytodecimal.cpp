#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,digit,ans=0,i=0;
    cout<<"Enter the binary number";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        ans=digit*pow(2,i)+ans;
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}