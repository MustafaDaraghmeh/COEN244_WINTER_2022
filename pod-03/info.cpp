//
// Created by musta on 2022-01-28.
//

#include "info.h"

info::info(date *pDate, const int size) {
    this->date_ptr = pDate;
    this->date_ptr_arr = new date[size];

}

info::~info() {
    delete date_ptr;
    delete [] date_ptr_arr;
}

info::info(): date_ptr(nullptr), date_ptr_arr{nullptr}{
//    date_ptr_arr=nullptr;
}
