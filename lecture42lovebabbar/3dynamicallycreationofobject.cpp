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
    Hero *b=new Hero; 
    b->setHealth(30);  // same as (*b).setHealth(30)
    cout<<"health is:"<<b->getHealth()/*same as (*b).getHealth()*/<<endl;

    (*b).setLevel('B');
    cout<<"level is:"<<(*b).getLevel()<<endl;
}