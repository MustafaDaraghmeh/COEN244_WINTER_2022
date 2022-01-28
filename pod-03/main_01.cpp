//
// Created by musta on 2022-01-28.
//
#include "date.h"
int main(){
    date* d1 = new date();
    d1->get_day();
    d1->set_day(10);

    date* d2 = new date(1, new Time());
    return 0;
}