#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count=0;
    int i=0;
    while(name[i]!=0)
    {
        count++;
        i++;
    }
    return count;
}
void reverse(char name[],int n)
{
    int start=0;
    int end=n-1;
    int temp;
    while(start<=end)
    {
        temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is:"<<name<<endl;
    int length=getlength(name);
    cout<<"length is:"<<length<<endl;

    reverse(name,length);
    cout<<"Reversed string is:"<<name<<endl;
}