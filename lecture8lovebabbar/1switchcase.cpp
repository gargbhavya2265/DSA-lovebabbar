#include<iostream>
using namespace std;
int main()
{
    int amount,notes,rem_amt;
    cout<<"Enter the amount";
    cin>>amount;

    switch(1)
    {
        case 1:     notes=amount/100;
                    rem_amt=amount%100;
                    cout<<"no of 100 rupees notes are:"<<notes<<endl;

        case  2 :   notes=rem_amt/50;
                    rem_amt=rem_amt%50;
                    cout<<"no of 50 rupees notes are:"<<notes<<endl;

        case 3 :    notes=rem_amt/20;
                    rem_amt=rem_amt%20;
                    cout<<"no of 20 rupees notes are:"<<notes<<endl;

        case 4:     notes=rem_amt/1;
                    rem_amt=rem_amt%1;
                    cout<<"no of 1rupees notes are:"<<notes<<endl;
    }
}
