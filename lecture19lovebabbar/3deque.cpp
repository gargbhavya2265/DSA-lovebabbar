#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //creation of deque
    deque<int>d;
    //insertion at last of the deque
    d.push_back(1);
   for(int i:d)
   {
    cout<<i<<" ";
   }
   cout<<endl;
    //insertion at beginning of the deque
    d.push_front(2);
    for(int i:d)
   {
    cout<<i<<" ";
   }
   cout<<endl;
    d.push_front(3);
    for(int i:d)
   {
    cout<<i<<" ";
   }
   cout<<endl;
//    //to remove an element from the last of the deque...
//    d.pop_back();
//    cout<<"after pop from last the deque is:"<<endl;
//    for(int i:d)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;
//    //to remove an element from the beginning of the deque...
//     d.pop_front();
//    cout<<"after pop from beginning the deque is:"<<endl;
//    for(int i:d)
//    {
//     cout<<i<<" ";
//    }
   cout<<endl;

   //to print element at a particular index in deque...
   cout<<"Element at 2nd index is:"<<d.at(2)<<endl;

   //to print the first element using 'front' function...
   cout<<"first element in deque is:"<<d.front()<<endl;
    //to print the last element using 'front' function...
   cout<<"last element in deque is:"<<d.back()<<endl;

   //to check whether deque is empty or not...
   cout<<"is deque empty???"<<d.empty()<<endl;
//     //how to clear the deque...
//    cout<<"before clear the deque size is"<<d.size()<<endl;  
//    d.clear();
//    cout<<"after clear the deque size is"<<d.size()<<endl;


    cout<<" before using d.erase the deque is:"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //how to clear the deque...(method 2)
    d.erase(d.begin());
    cout<<"after using d.erase the deque is:"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }

   
}
