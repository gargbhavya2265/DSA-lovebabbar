#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;

    //constructor..
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node* InsertAtHead(Node* &head,int data)
{
    Node* newnode=new Node(data);
    newnode->next=head;
    if(head==NULL)
    {
        return newnode;
    }
    head->prev=newnode;
    head=newnode;
    newnode->prev=NULL;
return head;

}
Node* InsertAtEnd(Node* &head,int data)
{
    Node* newnode=new Node(data);
    if (head == NULL) {
        head = newnode;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode;
return head;
}
Node* InsertAtPosition(Node* head,int data,int position)
{
    Node* temp=head;
    Node* newnode=new Node(data);
    if(position<1)
    {
        cout<<"Invalid position"<<endl;
        return head;
    }
    if(position==1)
    {
        head=InsertAtHead(head,data);
        return head;
    }
    int i=1;
    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;
return head;
}
Node* InsertAfterPosition(Node* &head,int data,int position)
{
    if(position==0)
    {
        head=InsertAtHead(head,data);
        return head;
    }
    Node* temp=head;
    Node* newnode=new Node(data);
    int i=1;
    while(i<position)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;
return head;
}
Node* DeletionAtHead(Node* &head)
{
    Node*temp=head;
    if(head==NULL)
    {
        cout<<"list is Empty"<<endl;
    }
    head=temp->next;
    head->prev=NULL;
    temp->next=NULL;
    free(temp);
return head;
}
Node* DeletionAtEnd(Node* & head)
{
    Node* temp=head;
    Node* before=temp;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return NULL;
    }
    if(head->next==NULL && head->prev==NULL)
    {
        free(head);
        return NULL;
    }
    while(temp->next!=NULL)
    {
        before=temp;
        temp=temp->next;
    }
    before->next=NULL;
    temp=before;
    temp->prev=NULL;
    return head;
    
}
Node* DeletionAtPosition(Node* &head,int position)
{
    Node* temp=head;
    Node* before=NULL;
    int i=1;
    if(position<1)
    {
        cout<<"enter a valid position"<<endl;
        return head;
    }
    if(position==1)
    {
        head=temp->next;
        head->prev=NULL;
        temp->next==NULL;
        free(temp);
        return head;
    }
    while(i!=position)
    {
        before=temp;
        temp=temp->next;
    }
    before->next=temp->next;
    temp->next->prev=before;
    free(temp);
    return head;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* node1=new Node(10);
    head=node1;
    print(head);

    head=InsertAtHead(head,20);
    print(head);

    head=InsertAtEnd(head,30);
    print(head);

    int position;
    cout<<"Enter the position"<<endl;
    cin>>position;
    head=InsertAtPosition(head,40,position);
    print(head);

    cout<<"Enter the position"<<endl;
    cin>>position;
    head=InsertAfterPosition(head,60,position);
    print(head);

    head=DeletionAtHead(head);
    print(head);

    head=DeletionAtEnd(head);
    print(head);

    cout<<"Enter the position"<<endl;
    cin>>position;
    head=DeletionAtPosition(head,position);
    print(head);
}