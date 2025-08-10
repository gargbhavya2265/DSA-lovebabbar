#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of elements in first array"<<endl;
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pairsum,pairs;
    cout<<"Enter the pairsum value"<<endl;
    cin>>pairsum;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==pairsum)
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                }
        }
    }
        

    
}