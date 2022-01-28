//
// Created by musta on 2022-01-28.
//

#ifndef COEN244_WINTER_2022_MANAGER_H
#define COEN244_WINTER_2022_MANAGER_H


#include "Account.h"

class manager {
public:
    manager();
    manager(int max);
    int max;
    int index;
    Account* accounts;
    void add_account(Account*);
};


#endif //COEN244_WINTER_2022_MANAGER_H
