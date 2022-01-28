//
// Created by musta on 2022-01-27.
//

// Class composition: Class Date uses an object of class Time.

#include <iostream>
using namespace std;
#include "test.h";
class Time {
public:
    Time();
    Time(const Time&);
    void setTime( int, int ,int );
    void printTime() const;

private:
    int hour, minute, second;
};

Time::Time() {
    cout << "Constructor Time() is called" << endl;
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(const Time &other) {
    cout << "Constructor Time() is called" << endl;
    hour = other.hour;
    minute = other.minute;
    second = other.second;
}
void Time::setTime(int h, int m, int s) {
    hour = ( h >= 0 && h < 24 ) ? h : 0;
    minute = ( m >= 0 && m < 60 ) ? m : 0;
    second = ( s >= 0 && s < 60 ) ? s : 0;
}

void Time::printTime() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

class Date {
public:
    Date(int, int, int, int, int, int);   // sets day, month, year, hours, minutes, seconds
    Date(int d, int i1, int i2, Time &time);

    void printDate() const;   	    // print date to the screen

private:
    int day, month, year;
    Time time;   // a component object
    Time* time_ptr;
};

Date::Date(int d, int m, int y, int hour, int min, int sec) {
    cout << "Constructor Date(...) is called" << endl;
    day = d;
    month = m;
    year = y ;
    time.setTime(hour, min, sec);
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
    time.printTime() ;
}

Date::Date(int d, int i1, int i2, Time &time) {
    day =d;
    month = i1;
    year = i2;
//    time=time;
    time_ptr = new Time(time);
    time_ptr = &time;
}


int main()
{
    Time* t= new Time();
    t->setTime(10,20,45);

    Date date_0(10, 12, 2006, *t);

    Date date_1(10, 12, 2006, 10, 20, 45);
    cout << "The date is:" << endl;
    date_1.printDate();
}