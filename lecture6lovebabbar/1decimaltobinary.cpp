#include<iostream>
#include<math.h>
using namespace std;
// yeh code iss vs code mai galt output de rha hai prr code shii hai run on online compiler......
int main()
{
    int n,bit,ans=0,i=0;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}