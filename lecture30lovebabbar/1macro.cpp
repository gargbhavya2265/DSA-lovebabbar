#include<iostream>
using namespace std;
#define SQUARE(x) (x*x)
#define PI 3.14
int main()
{
    int r;
    cout<<"enter the radius"<<endl;
    cin>>r;

     int area=PI*SQUARE(r);
     cout<<"area is:"<<area<<endl;
    
}