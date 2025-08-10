#include<iostream>
#include<queue>
using namespace std;
int main()
{

    //creation of default priority queue or we can say that the creation of max heap...
    priority_queue<int>maxi;
    //how to push dat in the max heap..
    //using maxheapname.push(value)
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    //creation of min heap...
    priority_queue<int,vector<int>,greater<int> >mini;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
     int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    
}