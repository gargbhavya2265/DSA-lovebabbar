#include<iostream>
using namespace std;
int main()
{
    int i=2;
    int n;
    cin>>n;
    int count=0;
    while(i<n)
    {
        if(n%i==0)
        {
            count+=1;
            cout<<"not prime";
            break;
        }
        else{  
            i++;
        }
    }
    if(count==0)
    {
        cout<<"prime";
    }
   
}
