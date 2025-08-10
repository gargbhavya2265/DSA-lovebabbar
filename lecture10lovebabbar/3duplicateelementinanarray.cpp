/* you have given an array of size n consisting each number between 1 to n-1 atleast once there is single integer that   
   is present in the array twice .your task is to find that duplicate integer....
   */


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
 int res;
    for(int i=0;i<n;i++)
    {
        res=ans^i;
    }
    cout<<"duplicate element in the array is: "<<res<<endl;
}