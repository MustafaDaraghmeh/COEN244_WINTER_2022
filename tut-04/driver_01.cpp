//
// Created by musta on 2022-02-03.
//
#include <iostream>

class B{

public:
    int z;
    int p;
    int data_of_class;

    virtual void print(){
        std::cout<< this->p <<std::endl<< this->data_of_class<< std::endl<< this->z<< std::endl;
    }
};

class D1: public B{
public:
    int extra_data_of_D1;
    int get_data_p(){
        return  this->p;
    }
    void set_data_p(int _p){
        this->p= _p;
    }

    void print()  {
        B::print();
        std::cout<<extra_data_of_D1<<std::endl;
    }
};

class D1_SD1: public D1{
public:
    int r;
};
class D2: public B{
public:
    int extra_data_of_D2;

    void print(){
        B::print();
//        std::cout<< this->p <<std::endl<< this->data_of_class<< std::endl<< this->z<< std::endl;
        std::cout<<extra_data_of_D2<<std::endl;
    }
};

int main (){
    B* B_ptr;

    D1 d1;
    d1.data_of_class = 77;
    d1.extra_data_of_D1 = 22;
    d1.p=66;
    d1.z=55;
    d1.get_data_p();
    d1.set_data_p(100);
    d1.print();

    B_ptr =&d1;
    B_ptr->print();

    D1_SD1 sd1;
    sd1.r=88;

    B_ptr =&sd1;

    D2 d2;
    d2.p=88;
    d2.data_of_class=66;
    d2.z=55;
    d2.print();

    B_ptr=&d2;

    return 0;
}