//on leet code submissions section
#include<iostream>
using namespace std;
bool ispoweroftwo(int n)
{
    int bits=0;
    if(n==1)
    return 1;
     while(n!=0)
    {
        if(n&1!=0 )
        {
             bits++;
        }
        n=n>>1;
    }
    if(bits==1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    int result=ispoweroftwo(n);
    cout<<result<<endl;
    
   
}