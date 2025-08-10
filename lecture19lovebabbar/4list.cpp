#include<iostream>
#include<list>
using namespace std;
int main()
{
    //insertion at last and beginning of the list...
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    //deletion at last and beginning of the list...
    l.pop_back();
    l.pop_front();
    cout<<"The deque is:"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //note :- In list we cannot access the element using "listname.at()"function...
    cout<<"before using 'l.erase(l.begin())' the deque is:"<<endl;
     for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after using 'l.erase(l.begin())' the deque is:"<<endl;
    l.erase(l.begin());
     for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //to find the size of list...
    cout<<"Size of list is:"<<l.size()<<endl;
    
    //to copy one list into the other list...
    list<int>copylist(l);
    cout<<"Copied list 'copy list' is:"<<endl;
    for(int i:copylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;


}