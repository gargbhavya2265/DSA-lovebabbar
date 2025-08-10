#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of elements in first array"<<endl;
    cin>>n;
    cout<<"Enter the number of elements in second array"<<endl;
    cin>>m;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int brr[20];
     cout<<"Enter "<<m<<" elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr[i]==brr[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}