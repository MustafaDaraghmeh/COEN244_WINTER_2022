//
// Created by musta on 2022-01-28.
//

#include "manager.h"

manager::manager() {
    this->max=10;
    accounts=new Account[max];
    index=-1;
}

manager::manager(int max) {
    this->max=max;
    index=-1;
    accounts=new Account[max];
}

void manager::add_account(Account * acc) {
    if(this->index<max)
        accounts[++index]= *acc;
}
