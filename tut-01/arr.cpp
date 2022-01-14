//
// Created by musta on 2022-01-14.
//

//
// Created by musta on 2022-01-14.
//

#include <iostream>
class point{
public:
    int x;
    int y;
};

int main(){
    point p1;
    p1.x=0;
    p1.y=0;
    point * ptr_point = new point [10];
    *(ptr_point +0) = p1;

    point ** d = new point *[10];
    *(d + 0) = ptr_point;


    int x1 = 1;
    int x2 = 2;
    int x3 = 3;

    int * ptr = new int();
    *ptr = 500;
    std::cout<<"int * ptr = "<<ptr<<"->"<<*ptr<<std::endl;
    delete ptr;

    int arr[4];
    *(arr + 0) = 1;
    *(arr + 1) = 2;
    *(arr + 2) = 3;

    std::cout<<"arr address= "<<arr<< " value -> "<<arr[0] <<" same address -> "<<&arr[0] <<" value -> "<<*(arr + 2)<<std::endl;

    arr[0]=100;
    arr[1]=200;
    arr[2]=300;


    ptr = new int [3];
    *(ptr + 0) = 1;
    *(ptr + 1) = 2;
    *(ptr + 2) = 3;

    return 0;
}