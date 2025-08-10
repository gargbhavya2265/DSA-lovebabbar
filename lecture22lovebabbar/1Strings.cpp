#include<iostream>
using namespace std;
bool ispalindrome(char name[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        if(name[s]!=name[e])
        {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int getlength(char *name)
{
    int length=0;
    int i=0;
    while(name[i]!=0)
    {
        length++;
        i++;
    }
    return length;
}
void Reverse(char name[],int length)
{
   int s=0;
   int e=length-1;
   while(s<=e)
   {
    swap(name[s++],name[e--]);
   }
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is:"<<name<<endl;
    //name[3]=0;
    int length=getlength(name);
    cout<<"length is:"<<length<<endl;
    Reverse(name,length);
    cout<<"Reverse String is:"<<name<<endl;

    if(ispalindrome(name,length)){
        cout<<"input string is palindrome"<<endl;
    }
    else{
        cout<<"input string is not palindrome"<<endl;
    }

    string s="bh\0bha";
    cout<<s<<endl;
}
