#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int m=(s+e)/2;
    int len1=m-s+1;
    int len2=e-m;
    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=m+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }

}
void mergeSort(int *arr,int s,int e)
{
    //base case..
    if(s>=e)
    {
        return;
    }
    int m=(s+e)/2;
    //left part ko sort kr
    mergeSort(arr,s,m);
    //right part ko sort kr
    mergeSort(arr,m+1,e);
    //dono part ko merge krke sort kr
    merge(arr,s,e);
}
int main()
{
    int arr[20];
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    mergeSort(arr,0,n-1);
    cout<<"sorted array is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}