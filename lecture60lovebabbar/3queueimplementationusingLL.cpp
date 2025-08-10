#include<iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
class Queue{
    Node* front;
    Node* rear;
public: 
        Queue()
        {
            front=rear=NULL;
        }

        bool IsEmpty()
        {
            return front==NULL;
        }
        void enqueue(int x)
        {
            Node* newnode=NULL;
            newnode->data=x;
            if(IsEmpty())
            {
                front=newnode;
                rear=newnode;
            }
            else{
                rear->next=newnode;
                rear=newnode;
            }
        }
        int dequeue()
        {
            if(IsEmpty())
            {
                return -1;
            }
            else{
                Node* temp=front;
                int ans=front->data;
                front=front->next;
                free(temp);
                return ans;
            }
        }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(51);
    q.enqueue(115);
    q.enqueue(58);
    q.dequeue();  
}
