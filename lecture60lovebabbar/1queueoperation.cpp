#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(13);
    cout<<"front mai "<<q.front()<<" hai"<<endl;
    q.push(14);
    q.push(15);
    cout<<"size of queue is:"<<q.size()<<endl;

    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    q.pop();
    if(q.empty())
    {
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }


}