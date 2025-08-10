#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4>a={1,2,3,4};
    int size=a.size();
    cout<<"size of array is:"<<size<<endl;
    cout<<"Elements are:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"element at 2nd index is:"<<a.at(2)<<endl;
    cout<<"empty or not?   "<<a.empty()<<endl;

    cout<<"first element is:"<<a.front()<<endl;
     cout<<"last element is:"<<a.back()<<endl;
}
