//
// Created by musta on 2022-01-13.
//
#include <iostream>

void welcome(){
    std::cout<<"Welcome to COEN 244"<<std::endl;
}
int main(){
    int size = 3;
    int int_arr[size];
    std::cout<<int_arr<<std::endl;

    int_arr[0]=100;
    std::cout<<int_arr[1]<<std::endl;
    std::cout<<&int_arr[1]<<std::endl;
    std::cout<<*(&int_arr[1])<<std::endl;

    int_arr[1] = 200;
    int_arr[2] = 300;

    int * int_ptr = int_arr;

    std::cout<<(int_ptr + 0 )<<std::endl;
    std::cout<<(int_ptr + 1 )<<std::endl;
    std::cout<<(int_ptr + 2 )<<std::endl;

    std::cout<<*(&int_arr[1])<<std::endl;

//    for(int i=0;i<size;i++)
//        std::cout<<int_arr[i];

//    int * int_ptr_arr = new int[3];



//    std::cout<< _1ptr[0]<< std::endl
//                <<*_1ptr<<std::endl
//                <<_1ptr<<std::endl;
//
//
//    _2ptr[0]= new int();
//    _2ptr[1]= _1ptr;
//
//    *(*_2ptr + 0)=5;
//    *((*_2ptr + 1) + 2)=5;


    return 0;
}