#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int searchkey,isfound;
    cout<<"Enter the value to be searched"<<endl;
    cin>>searchkey;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==searchkey)
        {
            isfound=1;
            cout<<searchkey<<" is found at index "<<i<<endl;
        }
    }
    if(isfound==0)
    {
        cout<<searchkey<<" is not in the array";
    }
}