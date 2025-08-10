#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<"number is:"<<num<<endl;

    cout<<"address of num is:"<<&num<<endl;
    int *ptr=&num;
    cout<<"number is:"<<(*ptr)<<endl;
    cout<<"address of num is:"<<ptr<<endl;


    double d=4.3;
    double *p=&d;
    cout<<"number is:"<<(*p)<<endl;
    cout<<"address of num is:"<<p<<endl;
    cout<<sizeof(p)<<endl;


    int number=12453;
    cout<<"before:"<<number<<endl;
    int *q=&number;
    (*q)++;
    cout<<"after:"<<number<<endl;


    //copying a pointer...
    int *m=q;
    cout<<q<<"-"<<m<<endl;
    cout<<*q<<"-"<<*m<<endl;



    //pointer arithmertic...
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    cout<<*t<<endl;
    cout<<"before:"<<t<<endl;
    t=t+1;
    cout<<"after:"<<t<<endl;


    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;
}