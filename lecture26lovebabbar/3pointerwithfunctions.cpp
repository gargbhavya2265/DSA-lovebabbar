#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<p<<endl;
}
void update(int *p)
{
    p=p+1;
    cout<<"inside update p is:"<<p<<endl;
    *p=*p+1;
    cout<<" value of p inside update:"<<*p<<endl;
}
int main()
{
    int value=5;
    int *p=&value;
    print(p);
    cout<<"before p:"<<p<<endl;
    update(p);
    cout<<"after p:"<<p<<endl;

    cout<<" value of p before update"<<*p<<endl;
    update(p);
    cout<<"value of p after update "<<*p<<endl;
}