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
    int tripletsum,pairs;
    cout<<"Enter the tripletsum value"<<endl;
    cin>>tripletsum;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;j<n;j++)
            {
                if(arr[i]+arr[j]+arr[k]==tripletsum)
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
        }
    }
}