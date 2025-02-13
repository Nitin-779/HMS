#include<iostream>
using namespace std;

class BankAccount{
    private:
    double balance;


    public:
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposit amount : "<<balance<<endl;

    }

    void withDraw(double amount){
        if (amount<balance){
            balance-=amount;
            cout<<"Withdral successful.New balance: "<<balance<<endl;

        }
        else{
            cout<<"withdrwal failed , insufficient balance. "<<endl;
        }

    }
};


int main(){


    BankAccount account;
    account.deposit(10000);
    account.withDraw(1000000);
    
}