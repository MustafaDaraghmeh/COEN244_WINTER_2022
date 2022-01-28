//
// Created by musta on 2022-01-27.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout;
using std::endl;

class Account {

public:
    int id;
    static int count;
    Account();
    Account(double, const char*);
    Account(const Account&);

    int getBalance() const;
    void setBalance(double);
    char* getOwner() const;
    void setOwner(char* ow);
    ~Account();

private:
    double balance;
    char* owner;
    int age;
    char* address;
};
//
int Account::count=0;

Account::Account() {
    cout << "Constructor Account() is called" << endl;
    balance = 0.0;
    owner = nullptr;
    id=0;
}

Account::Account(double b, const char* ow) {
    cout << "Constructor Account(double, char*) is called" << endl;
    balance = b;
    owner = new char[strlen(ow)+1];
    strcpy(owner, ow);
    count++;
    id=count;
}

Account::Account(const Account& other) {
    cout << "Copy Constructor Account(const Account&) is called" << endl;
    balance = other.getBalance();
    owner = new char[strlen(other.getOwner()) + 1];
//    strcpy(owner, other.getOwner());
    strcpy_s(owner, strlen(other.getOwner()) + 1 , other.getOwner());
    count++;
    id=count;
}

char* Account::getOwner() const{
    return owner;
}
void Account::setOwner(char* ow) {
    owner = new char[strlen(ow)+1];
    strcpy(owner, ow);
//    strcpy_s(owner,strlen(ow)+1, ow);
}

int Account::getBalance() const {
    return balance;
}

void Account::setBalance(double b) {
    balance = b;
}

Account::~Account() {
    delete [] owner;
}

int main() {
    std::cout<<Account::count<<endl;
    cout << "Example 1.............." << endl;
    Account *a1 = new Account();
    cout << a1->getBalance() << endl;
    cout << endl;

    cout <<"Example 2.............." << endl;
    Account* a2 = new Account(500, "John\0");
    cout << a2->getBalance() << endl;
    cout << a2->getOwner() << endl;
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
}