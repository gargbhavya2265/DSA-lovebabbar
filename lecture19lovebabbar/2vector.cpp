#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"size of vector is:"<<v.size()<<endl;
     cout<<"capacity of vector is:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size of vector is:"<<v.size()<<endl;
     cout<<"capacity of vector is:"<<v.capacity()<<endl;
     
     v.push_back(2);
    cout<<"size of vector is:"<<v.size()<<endl;
     cout<<"capacity of vector is:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size of vector is:"<<v.size()<<endl;
     cout<<"capacity of vector is:"<<v.capacity()<<endl;

     v.push_back(4);
    cout<<"size of vector is:"<<v.size()<<endl;
     cout<<"capacity of vector is:"<<v.capacity()<<endl;

     v.push_back(5);
    cout<<"size of vector is:"<<v.size()<<endl;
    cout<<"capacity of vector is:"<<v.capacity()<<endl;

    cout<<"element at 2nd index is:"<<v.at(2)<<endl;

    cout<<"first element is:"<<v.front()<<endl;
    cout<<"last element is:"<<v.back()<<endl;

    cout<<"Before pop vector is:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    //how to remove element from the vector....
    v.pop_back();
    cout<<endl;
    cout<<"after pop the vector is:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //clear function use...
    cout<<"before clear the vector size is:"<<v.size()<<endl;
    cout<<"before clear the vector capacity is:"<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear the vector size is:"<<v.size()<<endl;
    cout<<"after clear the vector capacity is:"<<v.capacity()<<endl;
    
//copying a vector into another vector
    vector<int>a(5,1);
    vector<int>last(a);
    for(int i:last)
    {
        cout<<i<<" ";
    }
}