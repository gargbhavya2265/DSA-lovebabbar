#include<iostream>
using namespace std;
int partition(int *arr,int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotidx=s+count;
    swap(arr[pivotidx],arr[s]);

    //left part mai sabhi elements choote kro aurr right mai sabhi bade..
    int i=s,j=e;
    while(i<pivotidx && j>pivotidx)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotidx && j>pivotidx)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void QuickSort(int *arr,int s, int e)
{
    //base case...
    if(s>=e)
    return;

    // parition ...
   int p= partition(arr,s,e);

    //left part ko sort krdo..
    QuickSort(arr,s,p-1);

    //right part ko sort krdo..
    QuickSort(arr,p+1,e);
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   QuickSort(arr,0,n-1);

   cout<<"sorted array is:"<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}