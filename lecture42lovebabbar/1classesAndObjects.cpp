#include<iostream>
using namespace std;
 class Hero{
    //properties
    public://acessmodifier
    int health;
    // char level;
    
    // void print()
    // {
    //     cout<<"level is:"<<level<<endl;
    // }
 };
int main()
{
    Hero ramesh;//yaha pr maine ekkk hero name ka object bana diya
    ramesh.health=70;
    // ramesh.level='A';
    cout<<"size of Hero class is: "<<sizeof(Hero)<<"byte"<<endl;
    cout<<"health of ramesh is:"<<ramesh.health<<endl;
    // cout<<"level of ramesh is:"<<ramesh.level<<endl;
     
}