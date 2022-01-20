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
        cout<<"Point("<<x<<", "<<y<<")";
    }
};

int main(){
    int col_num=10;
    Point x [100];  // 10*10

//    for(int row=0; row < 10; row++) {
//        for (int col = 0; col < 10; col++) {
//            x[row * col_num + col] = 0;
//        }
//    }

    int index_c=9;
    int index_r=9;
    x[index_r * col_num + index_c].set_x(10);
    x[index_r * col_num + index_c].set_y(10);
//    x[index_r * col_num + index_c].print();
    cout<<endl;
    for(int r=0; r<10; r++){
        for (int c=0;c<10;c++) {
            x[r * col_num + c].print(); cout<< " ";
        }
        cout<<endl;
    }
    return 0;
}