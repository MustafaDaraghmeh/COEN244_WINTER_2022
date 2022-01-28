//
// Created by musta on 2022-01-28.
//
//#include "date.h"
#include "info.h"

int main(){
    Time* t =new Time();
    info* info_ptr = new info(new date(1, t), 100);

    //    date* d1 = new date();
    //    d1->get_day();
    //    d1->set_day(10);
    //
    //    date* d2 = new date(1, new Time());
    //delete t;

    delete info_ptr;

    return 0;
}