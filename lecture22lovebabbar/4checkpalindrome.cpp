#include<iostream>
using namespace std;
int getlength(char str[])
{
    int i=0;
    int count=0;
    while(str[i]!=0)
    {
        count++;
        i++;
    }
    return count;
}
bool ispalindrome(char str[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(str[s]!=str[e])
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
int main()
{
    char str[20];
    cout<<"Enter your str"<<endl;
    cin>>str;
    int length=getlength(str);
   int ans= ispalindrome(str,length);

    cout<<"is the string palindrome:"<<ans<<endl;
}