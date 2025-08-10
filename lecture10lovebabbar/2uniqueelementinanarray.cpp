// you have array of size n where n=2m+1 where m elements occurs twice and 1 element occurs only once find the element ocuurs one time only
//  note:- 0^x=x   , x^x=0 always
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[20];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans=ans^arr[i];
  }
  cout<<"Unique element in the array is: "<<ans<<endl;
}