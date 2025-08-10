#include<iostream>
#include<queue>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front=0;
    int rear=0;
public:
    Queue()
    {
        size=100001;
        arr=new int[size];
        front=0;
        rear=0;
    }
    bool isEmpty()
    {
        if(front==rear)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void enqueue(int data)
    {
        if(rear==size)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    int dequeue()
    {
        int ans=arr[front];
        if(front==rear)
        {
            return -1;
        }
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
        return ans;
    }
    int Front(){
        if(front==rear)
        {
            return -1;
        }
        else{
             return arr[front];
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(13);
    cout<<"front of queue is:"<<q.Front()<<endl;
    q.enqueue(14);
    cout<<"front of queue is:"<<q.Front()<<endl;
    q.enqueue(15);
    cout<<"front of queue is:"<<q.Front()<<endl;
    q.dequeue();
    cout<<"front of queue is:"<<q.Front()<<endl;
}