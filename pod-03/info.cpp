//
// Created by musta on 2022-01-28.
//

#include "info.h"

info::info(date *pDate) {
    this->date_ptr = pDate;

}

info::~info() {
    delete date_ptr;
}

info::info(): date_ptr(nullptr) {

}
