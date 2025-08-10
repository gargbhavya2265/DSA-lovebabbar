#include<iostream>
using namespace std;
class A{
public:
    void sayHello()
    {
        cout<<"Hello Bhavya"<<endl;
    }
    void sayHello(string name)
    {
        cout<<"Hello "<<name<<endl;
    }
};
int main()
{
    A object;
    object.sayHello();
    object.sayHello("vaibhav");
}