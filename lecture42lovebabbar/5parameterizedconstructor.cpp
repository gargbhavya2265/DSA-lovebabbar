#include<iostream>
using namespace std;
class Hero{

private:
    int health;
    char level;
public:
    void print()
    {
        cout<<"level is:"<<level<<endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int health)
    {
        this->health=health;
    }
    char getLevel()
    {
        return level;
    }
    void setLevel(char level)
    {
        this->level=level;
    }
    //non parameterized constructor
    Hero(int health)
    {
        this->health=health;
        cout<<"mera constructor called hua!!!!"<<endl;
    }
};
int main()
{
    //object created statically...
    Hero ramesh(30);
    //object created dynamically...
    Hero *h=new Hero(56);

    cout<<"ramesh"<<&ramesh<<endl;
}