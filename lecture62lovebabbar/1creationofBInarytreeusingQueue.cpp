#include<iostream>
using namespace std;
#include<queue>
class Node{
    public:
        int data;
        Node* left=NULL;
        Node* right=NULL;
    //creating a  constructor
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
int main()
{
    int rootnodedata, leftchild_data,rightchild_data;
    cout<<"Enter the root element"<<endl;
    cin>>rootnodedata;
    Node* root=new Node(rootnodedata);
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        cout<<"Enter the data of left child of "<<temp->data<<endl;
        cin>>leftchild_data;
        if(leftchild_data!=-1)
        {
            temp->left=new Node(leftchild_data);
            q.push(temp->left);
        }
        cout<<"Enter the data of right child of "<<temp->data<<endl;
        cin>>rightchild_data;
        if(rightchild_data!=-1)
        {
            temp->right=new Node(rightchild_data);
            q.push(temp->right);
        }
    }
    return 0;
}