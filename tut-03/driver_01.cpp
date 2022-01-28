//
// Created by musta on 2022-01-27.
//

#include <iostream>
#include "Account.h"
#include "manager.h"

using std::cout;
using std::endl;


int main() {
    Extra_data* d =new Extra_data();
    std::cout<<Account::count<<endl;
    cout << "Example 1.............." << endl;
    Account *a1 = new Account();
    cout << a1->getBalance() << endl;
    cout << endl;

    cout <<"Example 2.............." << endl;
    Account* a2 = new Account(500, "John\0", 25, "ca\0");
    cout << a2->getBalance() << endl;
    cout << a2->getOwner() << endl;
    cout << a2->getAddress() << endl;
    cout << a2->getAge() << endl;
    cout << endl;

    cout <<"Example 3.............." << endl;
Account* a3 = new Account(*a2);
//    Account* a3 = a2;
    cout << a3->getBalance() << endl;
    cout << a3->getOwner() << endl;
    cout << endl;
    std::cout<<Account::count<<endl;
    cout <<"Example 4.............." << endl;
    delete a2;
    cout << a3->getOwner() << endl;


    Account* accounts= new Account[100];
    accounts[0]=*new Account(500, "John\0", 25, "ca\0");


    manager* man = new manager();
    man->add_account(new Account());
}