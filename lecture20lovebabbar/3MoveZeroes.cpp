#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void moveZeroes(int arr[],int n)
{
   int i=0;
   for(int j=0;j<n;j++)
   {
    if(arr[j]!=0)
    {
        swap(arr[i],arr[j]);
        i++;
    }
   }
}
int main()
{
    int n,arr1[50];
    cout<<"enter the number of elements in first array"<<endl;
    cin>>n;
    cout<<"enter the elements of the 1st array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    moveZeroes(arr1,n);
    print(arr1,n);
}