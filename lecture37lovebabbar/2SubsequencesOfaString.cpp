#include<iostream>
using namespace std;
#include<vector>
class solution{
private:
    void solve(string str,string output,int index,vector<string>&ans)
    {
        //base Case....
        if(index>=str.size())
        {
            if(output.size()>0)
            {
                ans.push_back(output);
                return;
            }
        }

        //exclude part...
        solve(str,output,index+1,ans);

        //include part..
        char element=str[index];
        output.push_back(element);
        solve(str,output,index+1,ans);
    }

public:
    vector<string>SubsequencesofaString(string str)
    {
        vector<string>ans;
        string output="";
        int index=0;
        solve(str,output,index,ans);
    }
    
};