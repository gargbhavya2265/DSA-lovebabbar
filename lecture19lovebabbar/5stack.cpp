#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //declaration of stack...
    stack<string>s;

    //inserting element in stack...
    s.push("bhavya");
    s.push("vaibhav");
    s.push("jayashmit");
    s.push("Yash");

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   

   //to find the size of stack..
   cout<<"size of stack is:"<<s.size()<<endl;

   //to check whether stack is empty or not...
   cout<<"is Stack empty???"<<s.empty()<<endl;

}