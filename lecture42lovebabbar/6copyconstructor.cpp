#include<iostream>
using namespace std;
class Hero{
    
private:
    int health;
    char level;
public:

    //non parameterized constructor
    Hero()
    {
        cout<<"mera constructor called hua!!!"<<endl;
    }
    //parameterized constructor
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    //copy constuctor
    Hero(Hero &temp)
    {
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print()
    {
        cout<<"health is:"<<health<<endl;
        cout<<"level is:"<<level<<endl;
    }
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

};
int main()
{
    Hero suresh(70,'C');
    cout<<endl<<endl<<"FOR SURESH:"<<endl;
    suresh.print();
    //copy constructor object creation...
    Hero ritesh(suresh);
    cout<<endl<<endl<<"FOR RITESH:"<<endl;
    ritesh.print();
}