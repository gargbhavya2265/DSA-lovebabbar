#include<iostream>
using namespace std;
class Hero{

public:
    char *name;
    int health;
    char level;
public:

    //non parameterized constructor...
    // Hero()
    // {
    //     cout<<"copy constructor called"<<endl;
    //     name=new char[100];
    // }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health=h;
    }
    char getLevel()
    {
        return level;
    }
    void setLevel(char ch)
    {
        level=ch;
    } 
    void setName(char name[])
    {
        this->name=name;
    }
    void print()
    {
        cout<<"name:"<<name<<" , ";
        cout<<"health:"<<health<<" , ";
        cout<<"level:"<<level<<endl;
    }
};
int main()
{
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('D');
    char name[10]="bhavya";
    h1.setName(name);
    h1.print();


    Hero h2(h1);
    h2.print();

    h1.name[0]='r';
    h1.print();

    h2.print();
}