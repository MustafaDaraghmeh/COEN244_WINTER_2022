//
// Created by musta on 2022-01-28.
//

#ifndef COEN244_WINTER_2022_DATE_H
#define COEN244_WINTER_2022_DATE_H


#include "Time.h"

class date {
private:
    int day;
    Time* time;
public:
    ~date();
    date();
    date(int);
    date(int, Time*);
    int get_day();
    bool set_time(int h, int m, int s); // int h, int m, int s
    void set_day(int day);
};


#endif //COEN244_WINTER_2022_DATE_H
