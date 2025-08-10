#include<iostream>
#include<vector>
using namespace std;
void print(int arr3[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int k=0,i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            {
                arr3[k]=arr1[i];
                k++;
                i++;
            }
        else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
    }
    while(i<n)
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    while(i<m)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
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
    int m,arr2[50];
    cout<<"enter the number of elements in second array"<<endl;
    cin>>m;
    cout<<"enter the elements of the 2nd array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int x=n+m;
    int arr3[x]={0};
    merge(arr1,n,arr2,m,arr3);
    print(arr3,8);
}