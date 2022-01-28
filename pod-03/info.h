//
// Created by musta on 2022-01-28.
//

#ifndef COEN244_WINTER_2022_INFO_H
#define COEN244_WINTER_2022_INFO_H


#include "date.h"

class info {

date* date_ptr;
date* date_ptr_arr;
public:
    info();
    ~info();
    info(date *pDate, const int size);
};


#endif //COEN244_WINTER_2022_INFO_H
