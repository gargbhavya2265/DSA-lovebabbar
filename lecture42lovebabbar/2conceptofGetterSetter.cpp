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
    Hero ramesh;
    //ramesh.health=63;
    //cout<<"health is:"<<ramesh.health<<endl;
    /*we can acess the health as it is public but we cant acess the level 
    because it private .. so to acess the level we use getter and to set the value of
    private data member we use setter */
   ramesh.setHealth(23);
   cout<<"health is:"<<ramesh.getHealth()<<endl;
   ramesh.setLevel('A');
   cout<<"level is:"<<ramesh.getLevel()<<endl;
}