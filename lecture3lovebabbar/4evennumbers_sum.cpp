#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int i=2;
    cout<<"Enter n";
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of all even numbers upto "<<n<< "is:"<<sum;

}