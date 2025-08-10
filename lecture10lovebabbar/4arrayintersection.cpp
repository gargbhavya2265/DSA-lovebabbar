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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                cout<<arr[i]<<" ";
                brr[j]=-9999999;
                break;
            }
        }
    }

}
// this solution is correct pr coding ninjas mai TLE(TIME LIMIT EXCEED) ho rha so iska dusra solution issi folder mai h..