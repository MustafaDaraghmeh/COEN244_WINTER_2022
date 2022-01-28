//
// Created by musta on 2022-01-28.
//

#include "date.h"

int date::get_day() {
    return this->day;
}

void date::set_day(int day) {
    this->day=day;
}

date::date() {
    day=0;
    time= nullptr;

}

date::date(int day): day(day) {
    this->time=new Time();
}

date::date(int day, Time * time) {
    this->day=day;
    this->time= time;
}

date::~date() {
    delete time;
}

bool date::set_time(int h, int m, int s) {
    this->time = new Time(h,m,s);
    return true;

    return false;
}
