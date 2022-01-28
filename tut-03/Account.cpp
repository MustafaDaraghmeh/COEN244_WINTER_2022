//
// Created by musta on 2022-01-28.
//

#include "Account.h"
int Account::count=0;

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
Account::Account() {
    cout << "Constructor Account() is called" << endl;
    balance = 0.0;
    owner = nullptr;
    id=0;
    address= nullptr;
    age=0;
    this->extra_Data= nullptr;
}

Account::Account(double b, const char* ow, int age, const char* address) {
    cout << "Constructor Account(double, char*) is called" << endl;
    balance = b;
    owner = new char[strlen(ow)+1];
    strcpy(owner, ow);
    count++;
    id=count;
    this->age=age;
    this->extra_Data=new Extra_data[4];

    this->address = new char[strlen(address)+1];
    strcpy(this->address, address);

}

Account::Account(const Account& other) {
    cout << "Copy Constructor Account(const Account&) is called" << endl;
    balance = other.getBalance();
    owner = new char[strlen(other.getOwner()) + 1];
//    strcpy(owner, other.getOwner());
    strcpy_s(owner, strlen(other.getOwner()) + 1 , other.getOwner());
    count++;
    id=count;

    this->age=other.getAge();

    this->address = new char[strlen(other.getAddress())+1];
    strcpy(this->address, other.getAddress());

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
    delete [] address;
    delete [] extra_Data;
}

int Account::getAge() const{
    return this->age;
}

char *Account::getAddress() const {
    return this->address;
}
