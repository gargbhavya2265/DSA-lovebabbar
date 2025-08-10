#include<iostream>
using namespace std;
int main()
{
    int arr[10]={34724,2,2,3,452,144};
    int *p=arr;//it is how we can store the address of the array in the pointer...
    cout<<"address of a is:"<<arr<<endl;
    cout<<"address of a is:"<<&arr[0]<<endl;
    cout<<"address of a is:"<<p<<endl;//print the address of array 'arr'
   cout<<*arr<<endl;//print the value at arr[0]
   cout<<*arr+1<<endl;
   cout<<*(arr+1)<<endl;

    int a[4]={23,122,41,67};
    cout<<a[2]<<endl;
    cout<<*(a+2)<<endl;

    int i=2;
    cout<< i[a]<<endl;// print the value present at a[2]...

    int brr[10]={0};
    int *q=brr;
    cout<<"size of brr array is:"<<sizeof(brr)<<endl;
    cout<<"size of pointer q is:"<<sizeof(q)<<endl;
    cout<<"size of pointer q is:"<<sizeof(*q)<<endl;
    cout<<"size of pointer q is:"<<sizeof(&q)<<endl;

    int x[20]={1,2,3,45,45,432,342};
    cout<<"address of x is:"<<x<<endl;
    cout<<"address of x is:"<<&x[0]<<endl;
    cout<<"address of x is:"<<&x<<endl;
    
    int *r=x;
    cout<<"adress of x is:"<<r<<endl;
    cout<<"adress of r is:"<<&r<<endl;
}