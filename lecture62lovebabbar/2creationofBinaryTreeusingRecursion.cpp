#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* BinaryTreeBuilder()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    Node* temp=new Node(x);
    cout<<"enter the data of left child of "<<temp->data<<" :";
    temp->left=BinaryTreeBuilder();
    cout<<"enter the data of right child of "<<temp->data<<" :";
    temp->right=BinaryTreeBuilder();
    
    return temp;
}
void PreOrderTraversal(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void InorderTraversal(Node* root)
{
    if(root==NULL)
        return;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}
void PostorderTraversal(Node* root)
{
    if(root==NULL)
        return;
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    cout<<"Enter the root node"<<" :";
    Node* root;
    root=BinaryTreeBuilder();

    cout<<"PreOrder"<<" :";
    PreOrderTraversal(root);
    cout<<"\nInOrder"<<" :";
    InorderTraversal(root);
    cout<<"\nPostorder"<<" :";
    PostorderTraversal(root);

}
