#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,product=1,digit;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(n>=0)
    {
        digit=n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
    }
    int result=(product-sum);
    cout<<result<<endl;
}