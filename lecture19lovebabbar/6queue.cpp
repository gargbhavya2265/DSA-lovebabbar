#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("bhavya");
    q.push("vaibhav");
    q.push("jayashmit");
    q.push("yash");
    cout<<" before pop size of queue is:"<<q.size()<<endl;
    cout<<"first element is:"<<q.front()<<endl;
    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    cout<<"after 1st pop first element is:"<<q.front()<<endl;
    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    cout<<"after 2nd pop first element is:"<<q.front()<<endl;
    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    cout<<"after 3rd pop first element is:"<<q.front()<<endl;
    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    
}
