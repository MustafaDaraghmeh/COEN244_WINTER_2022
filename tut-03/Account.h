//
// Created by musta on 2022-01-28.
//

#ifndef COEN244_WINTER_2022_ACCOUNT_H
#define COEN244_WINTER_2022_ACCOUNT_H


#include "Extra_data.h"

class Account {

public:
    int id;
    static int count;
    Account();
    Account(double, const char*, int, const char*);
    Account(const Account&);

    int getBalance() const;
    void setBalance(double);
    char* getOwner() const;
    void setOwner(char* ow);
    ~Account();

    int getAge() const;

    char *getAddress() const;
    Extra_data* extra_Data;
private:
    double balance;
    char* owner;
    int age;
    char* address;
};
//
#endif //COEN244_WINTER_2022_ACCOUNT_H

