#include<iostream>
using namespace std;
class bank_acc
{
    string name;
    int acc_no;
    string type_of_account;
    int bal;
    int deposit_amt;
    int final_bal;
    public:
    input()
    {
        cout<<"Enter name of depositer: ";
        cin >>name;
        cout<<"Enter the account number: ";
        cin>>acc_no;
        cout<<"Enter thr type of account: ";
        cin>> type_of_account;
        cout<<"Enter the initial balance: ";
        cin>>bal;
        cout<<"Enter the amount to be deposited: ";
        cin>>deposit_amt;

    }
     deposit()
     {
        final_bal=bal+deposit_amt; 
       
     }   

     display()
     {  // input();
        cout<<endl<<"Name of depositer: "<<endl;
        cout<<name;
        cout<<"\nAccount number: "<<endl;
        cout<<acc_no;
        cout<<"\nType of account: "<<endl;
        cout<<type_of_account;
        cout<<"\nInitial Balance:"<<endl;
        cout<<bal;
        cout<<"\n Final balance after deposition :"<<endl;
        cout<<final_bal;
       

     }
};
int main()
{
    bank_acc a;
    a.input();
    a.deposit();
    a.display();

}