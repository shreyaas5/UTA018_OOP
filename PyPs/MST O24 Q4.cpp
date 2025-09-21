// Develop a Donation Management System in C++ that efficiently manages
// 5 CO2 L4
// the transfer of donations between accounts utilizing classes. The system
// consists of the following components: Donor Class contains private data
// members: string donor_name, double balance. Write the following
// functions in public section:
//  set_details(string name, double amount)
//  display()
//  double get_balance()
// Recipient Class contains the private data member: string recipient_name,
// double account_balance, double amount_required needed by the recipient
// and the following functions in public section:
//  set_details(string name, double balance, double amount)
//  display()
//  double get_balance()
// Additionally, the program includes the following function:
// transfer (Donor &donor, Recipient &recipient, double
// amount)
// This function facilitates the transfer of funds between a donor and a
// recipient. This function will verify whether the donor has sufficient funds
// for the transfer. If the donor has adequate funds, both the donor's and
// recipient's balances will be updated accordingly. Complete the program
// using the above-mentioned conditions.

#include <iostream>
using namespace std;

class Recipient;
class Donor{
    string donor_name; double balance;
    public:
        void set_details(string name, double amount){
            donor_name = name;
            balance = amount;
        }
        void display(){
            cout << "Donor Name: " << donor_name << endl;
            cout << "Donor Balance: $" << balance << endl;
        }
        double get_balance(){
            return balance;
        }
        friend bool transfer(Donor &donor, Recipient &recipient, double amount);
};
class Recipient{
    string recipient_name; double account_balance; double amount_required;
    public:
        void set_details(string name, double balance, double amount){
            recipient_name = name;
            account_balance = balance;
            amount_required = amount;
        }
        void display(){
            cout << "Recipient Name: " << recipient_name << endl;
            cout << "Recipient Balance: $" << account_balance << endl;
            cout << "Amount required : $" << amount_required << endl;
        }
        double get_balance(){
            return account_balance;
        }
        friend bool transfer(Donor &donor, Recipient &recipient, double amount);

};

bool transfer(Donor &donor, Recipient &recipient, double amount) {
    return (donor.get_balance() >= amount) 
           ? (donor.balance -= amount, recipient.account_balance += amount, cout << "Transfer successful!", true)
           : (cout << "Insufficient funds!", false);
}

int main(){
    Donor d;
    Recipient r;
    d.set_details("D",100), r.set_details("R",800,1000);
    d.display(),r.display();
    transfer(d,r,1000);
}
