#include<iostream>
using namespace std;
class Node{

public:
    int data;
    Node*next;
    //constructor to initialise node with data..
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
Node* InsertionAtHead(Node* &head,int data)
{
    //new node create
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
    return head;
}
Node* InsertAtEnd(Node* &head,int data)
{
    //new node create...
    Node*newnode=new Node(data);
    //If the list is empty, make the new node the head
    if(head==NULL)
    return newnode;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    return head;
}
Node* InsertAtPosition(Node* &head,int data,int position)
{
    Node*temp=head;
    int i=1;
    Node *newnode=new Node(data);
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return head;
    }
    if(position==1)
    {
        InsertionAtHead(head,data);
    }
    
    while(i<position-1)
    {
        i++;
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
    return head;
}
Node *DeletionAtHead(Node* &head)
{
    if(head==NULL)
    {
        cout<<"List is Empty"<<endl;
        return NULL;
    }
    Node *temp=head;
    head=temp->next;
    temp->next=NULL;
    free(temp);
    return head;
}
Node* DeletionAtEnd(Node* &head)
{
    if (head == nullptr)
        return nullptr;
 
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node *temp=head;
    Node* prev=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    
    prev->next=NULL;
    temp->next=NULL;
    free(temp);
    
return head;
}
Node* DeletionAtPosition(Node* &head,int position)
{
    Node* temp=head;
    Node*prev=NULL;
    int i=1;
    if(position<1 || head==NULL)
    {
        cout<<"deletion not possible"<<endl;
        return head;
    }
    if(position==1)
    {
        head=DeletionAtHead(head);
        return head;
    }
    while(i!=position)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);
return head;
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
   Node *node1=new Node(10);
   Node* head=node1;
   print(head);
   
    head=InsertionAtHead(head,20);
    print(head);
    head=InsertionAtHead(head,30);
    print(head);


//    head=InsertAtEnd(head,40);
//    print(head);


//     int position;
//     cout<<"Enter the posititon"<<endl;
//     cin>>position;
//     head=InsertAtPosition(head,50,position);
//     print(head);
   
    
//     head=DeletionAtHead(head);
//     print(head);

//     head=DeletionAtEnd(head);
//     print(head);

//     int deletionposition;
//     cout<<"Enter the posititon"<<endl;
//     cin>>deletionposition;
//     head=DeletionAtPosition(head,deletionposition);
//     print(head);
}