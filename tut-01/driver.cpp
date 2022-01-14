//
// Created by musta on 2022-01-14.
//

#include <iostream>

int main(){
    int * ptr = new int();
    *ptr = 500;
    std::cout<<"int * ptr = "<<ptr<<"->"<<*ptr<<std::endl;
    delete ptr;



    ptr = new int();
    *ptr = 1500;
    std::cout<<"int * ptr = "<<ptr<<"->"<<*ptr<<std::endl;
    delete ptr;


    return 0;
}