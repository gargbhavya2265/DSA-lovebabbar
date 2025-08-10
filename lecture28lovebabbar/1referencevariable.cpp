#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int &j=i;
    cout<<"address of i is:"<<&i<<endl;
    cout<<"address of j is:"<<&j<<endl;

}