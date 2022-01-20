//
// Created by musta on 2022-01-20.
//
#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(): Point(0,0){}
    Point(int x, int y): y(y), x(x){}

    bool set_x(int x){
        if (x >= 0) {
            this->x = x;
            return 1;
        }
        return 0;
    }
    int get_x() {
        return this->x;
    }
    bool set_y(int y){
        if (x >= 0) {
            this->y = y;
            return 1;
        }
        return 0;
    }
    int get_y() {
        return this->y;
    }
    void print(){
        cout<<"Point("<<x<<", "<<y<<")"<<endl;
    }
};
//
int main(){
    int size =10;
    Point *p1 = new Point[size];
    for(int i=0; i<size;i++){
        p1[i].set_x(i+3);
        p1[i].set_y(i*3);
    }

    for(int i=0; i<size;i++){
        p1->print();
        p1++;
    }

    for(int i=0; i<size;i++){
        p1[i].print();
    }
    return 0;
}