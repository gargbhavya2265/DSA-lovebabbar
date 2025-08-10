#include<iostream>
using namespace std;
#include<vector>
class solution{
    private:
        void solve(string digits,string output,int index,vector<string>&ans,string mapping[])
        {
            //base case...
            if(index>=digits.length())
            {
                ans.push_back(output);
                return;
            }

            int number=digits[index]-'0';
            string value=mapping[number];
            for(int i=0;i<value.length();i++)
            {
                output.push_back(value[i]);
                solve(digits,output,index+1,ans,mapping);
                output.pop_back();
            }

        }
public:
    vector<string>letterCombination(string digits)
    {
        string output="";
        vector<string>ans;
        int index=0;
        if(digits.length()==0)
        {
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);

    return ans;
    }

int main()
{
    string digits="23";
    letterCombination(digits);
}

};