#include<iostream>
using namespace std;
class Student{
private:
    string name;
    int age;
    int height;
public:
    Student(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    string getName(){
        return name;
    }
    void setName(string name)
    {
        this->name=name;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    
};
int main()
{
    Student first("bhavya garg",19);
    cout<<"name is:"<<first.getName()<<endl;
    cout<<"age is:"<<first.getAge()<<endl;

    first.setName("VAIBHAV");
    first.setAge(18);
    cout<<"name is:"<<first.getName()<<endl;
    cout<<"age is:"<<first.getAge()<<endl;
}